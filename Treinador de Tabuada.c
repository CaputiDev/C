#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//prototipos de funções

void inicio();
int escolhaModo();
void acerto();
void erro(int n1, int n2);
int randomizador();
void calculadora(int e,int n1,int n2);
void nomearModo(char *modo);
//variaveis globais

int pontoPositivo,pontoNegativo =0;
int verificador =1;
//programa
int main(){
    //localizador para português (para dev-C++ e codeBlocks)
    setlocale(LC_ALL,"portuguese");

    //declaração das variáveis
    int n1,n2,resposta,escolha;

    inicio();
    escolha=escolhaModo();
    if(escolha ==1){
        nomearModo("ATÉ ERRAR");
    }else if(escolha==2){
        nomearModo("PARE QUANDO QUISER");
    }else{
    printf("ERRO NUMERO INSERIDO INVÁLIDO(%d)",escolha);
    exit(0);
    }


    while(verificador){
        //randomização dos numeros
        srand(time(NULL));
        n1=randomizador();
        n2=randomizador();

        printf("\n%dx%d= ", n1,n2);
        scanf("%d",&resposta);

        if(escolha ==1){
            calculadora(resposta,n1,n2);
        }else{
            calculadora(resposta,n1,n2);
            printf("\nDESEJA Continuar?\n");
            printf("1-SIM");
            printf("\n0-NÃO\n");
            scanf("%d",&verificador);
        }

    }
        printf("\nFIM!\n");
        printf("Acertos: %d",pontoPositivo);
        printf("\nErros: %d",pontoNegativo);
        return 0;
}

//funções
void inicio(){
    printf("BEM-VINDO AO MATEMAX!\n");
    printf("TREINADOR DE TABUADA\n");
    printf("Made by Caputi\n");

}
int escolhaModo(){
    int escolha;

    printf("\nEscolha o modo:\n");
    printf("1-ATÉ ERRAR");
    printf("\n2-PARE QUANDO QUISER\n");
    scanf("%d",&escolha);
    return escolha;
}
int randomizador(){
    //numeros de 1 a 9
    return(rand() % 9)+1;
}
void acerto(){
    printf("\nAcerto!\n");
    ++pontoPositivo;
}
void erro(int n1, int n2){
    printf("\nErro");
    printf("\nValor correto:%d\n",(n1*n2));
    verificador=0;
    ++pontoNegativo;
}
void calculadora(int e,int n1,int n2){
        if(e == n1*n2){
            acerto();
            }else{
            erro(n1,n2);
            }
}
void nomearModo(char *modo){
    printf("\nOk! \nModo selecionado:%s",modo);
    }
//a
