#include "stdio.h"
#include "conio.h"

int num;

int main(){
    printf("Informe um numero");
    scanf("%d", &num);
    
    if(num > 100 && num < 200){
        printf("o numero informado est� no intervalo");
    }else{
        printf("o numero informado est� fora do intervalo");
    }
    
    getch();
}
