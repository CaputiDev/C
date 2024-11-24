# Treinador de tabuada Matemax

O programa em C, chamado "MATEMAX", é um treinador de tabuada interativo projetado para ajudar os usuários a praticar multiplicação de maneira divertida e eficiente. A seguir, explico brevemente seu funcionamento e utilização:

## Funcionamento

O usuário escolhe entre dois modos de jogo:

### ATÉ ERRAR: 

O programa continuará gerando questões até que o usuário erre uma resposta.

### PARE QUANDO QUISER:

O programa permite que o usuário decida quando parar após responder a cada questão.

## Geração e aleatorização de dois numeros:

Dois números aleatórios entre 1 e 9 são gerados utilizando a função **randomizador()**, que utiliza a função da biblioteca stdlib.h: **rand()**, com o auxilio de **srand()** e **time()** da biblioteca time.h, que usa o horário do computador para fazer o efeito da "randomização".

Efetivamente, na hora do uso, o programa solicita ao usuário o resultado da multiplicação desses 2 números.
## Verificação de Respostas:

Se a resposta estiver correta, a função **acerto()** é chamada, contabilizando um ponto positivo.

Se a resposta estiver errada, a função **erro()** exibe a resposta correta e contabiliza um ponto negativo.

## Finalização:

Ao finalizar, o programa exibe o total de acertos e erros.
No modo "PARE QUANDO QUISER", digite 1 para continuar ou 0 para finalizar após cada pergunta e, no caso do modo "ATÉ ERRAR", quando o usuário errar o resultado o programa finaliza o jogo. 

Ao término, o programa exibirá o número total de acertos e erros, ajudando o usuário a monitorar seu desempenho.