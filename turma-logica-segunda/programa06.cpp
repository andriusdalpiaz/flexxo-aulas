#include "stdio.h"
#include "conio.h"

float sal;
float sal_novo;
float abono;

int main(){
    // Entrada de dados;
    printf("Informe o salario");
    scanf("%f", &sal);
    printf("Informe o abono");
    scanf("%f", &abono);
    
    //Processamento
    sal_novo = sal + abono;
    
    //Saida
    printf("Salario final: %f", sal_novo);
    getch();
}





