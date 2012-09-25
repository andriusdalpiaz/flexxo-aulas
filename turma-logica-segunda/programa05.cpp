#include "stdio.h"
#include "conio.h"

float valor_de_venda, custo, acrescimo;

int main(){
    printf("Informe o valor de custo ");
    scanf("%f", &custo);
    printf("Informe o acrescimo: ");
    scanf("%f", &acrescimo);
    valor_de_venda = custo * (1 + (acrescimo / 100));
    printf("Valor de venda: %f", valor_de_venda);
    getch();
}







