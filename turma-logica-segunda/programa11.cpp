#include "stdio.h"
#include "conio.h"

int count, total, num;

int main(){
    count = 1;
    total = 0;
    
    while(count <= 80){
       printf("Informe o num:");
       scanf("%d", &num);
       if(num >= 10 && num <= 150){
          total = total + 1;
       }
       count = count + 1;
    }
    
    printf("Existem %d numeros entre 10 e 150", total);
    getch();
}








