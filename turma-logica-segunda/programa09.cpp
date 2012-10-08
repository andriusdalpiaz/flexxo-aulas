#include "stdio.h"
#include "conio.h"

int ano;
int continuar;
float valor;
float desconto;
float valor_final;

int main(){
    continuar = 1;
    while(continuar == 1){
        printf("Informe o valor do carro: ");
        scanf("%f", &valor);
        printf("Informe o ano do carro: ");
        scanf("%d", &ano);
        
        if(ano > 2000){
               desconto = valor * 0.07;
        }else{
               desconto = valor * 0.12;
        }
        
        valor_final = valor - desconto;
        
        printf("Valor do desconto: %.2f\n", desconto);
        printf("Valor do final do carro: %.2f\n", valor_final);
        
        printf("Você deseja continuar? (1 Sim | 2 Nao)");
        scanf("%d", &continuar);
    }
    printf("Programa finalizado");
    getch();
}
