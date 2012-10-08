#include "stdio.h"
#include "conio.h"

float num;

int main(){
    printf("Informe um numero");
    scanf("%f", &num);
    num = num * 1.89;
    printf("Numero R$ %.2f", num);
    getch();
}
