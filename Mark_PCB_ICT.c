#include <stdio.h>
#include "pico/stdlib.h"

#define BUTTON_PIN 16   // Pino do botão
#define RELAY_PIN 14    // Pino do relé

int main() {
    stdio_init_all();

    // Configuração do botão
    gpio_init(BUTTON_PIN);
    gpio_set_dir(BUTTON_PIN, GPIO_IN);
    gpio_pull_up(BUTTON_PIN); // Ativa pull-up interno

    // Configuração do relé
    gpio_init(RELAY_PIN);
    gpio_set_dir(RELAY_PIN, GPIO_OUT);
    gpio_put(RELAY_PIN, 0); // Inicialmente desligado

    while (1) {
        if (gpio_get(BUTTON_PIN) == 0) { // Botão pressionado (LOW)
            gpio_put(RELAY_PIN, 1); // Liga o relé
            sleep_ms(2000);         // Mantém ligado por 2 segundos
            gpio_put(RELAY_PIN, 0); // Desliga o relé

            // Aguarda o botão ser solto antes de continuar
            while (gpio_get(BUTTON_PIN) == 0) {
                sleep_ms(10);
            }
        }
        sleep_ms(50);  // Delay para evitar uso excessivo da CPU
    }

    return 0;
}
