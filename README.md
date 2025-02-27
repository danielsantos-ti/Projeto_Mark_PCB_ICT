# Mark_PCB_ICT

## 📌 Descrição  
O **Mark_PCB_ICT** é um sistema de automação desenvolvido para otimizar o processo de marcação de placas de circuito impresso (**PCB**) após a realização de testes em máquinas ICT (**In-Circuit Test**). Esse projeto garante que apenas as placas aprovadas sejam identificadas corretamente, evitando falhas no controle de qualidade e reduzindo riscos de prejuízos financeiros.  

Inicialmente implementado com **Arduino**, o projeto será reescrito para **Raspberry Pi** visando maior robustez e integração com sistemas industriais.  

## 🎯 Objetivo  
O objetivo do **Mark_PCB_ICT** é automatizar a marcação das **PCBs** testadas e aprovadas, eliminando erros humanos e garantindo a rastreabilidade dos componentes eletrônicos na linha de produção.  

## 🛠️ Tecnologias Utilizadas  
- **Arduino** (versão inicial)  
- **Raspberry Pi** (versão futura)  
- **C/C++** para desenvolvimento do firmware  
- **Relés e circuitos eletrônicos** para acionamento do sistema de marcação  

## 🔧 Funcionamento  
1. O microcontrolador recebe um **pulso elétrico** da máquina ICT indicando a aprovação da PCB.  
2. O sistema processa esse sinal e ativa um **relé**, que aciona o mecanismo de marcação da placa.  
3. Após um tempo pré-determinado, o relé é desativado, finalizando o processo de marcação.  
