#include "stdio.h"
#include "conio.h"

int cotacao, dolar, reais;

int main(){
    printf("Informe a cotacao do dolar em reais: ");
    scanf("%d", &cotacao);
    printf("Informe o valor em dolar: ");
    scanf("%d", &dolar);
    reais = dolar * cotacao;
    printf("Valor em reais: %d", reais);
    getch();
}






