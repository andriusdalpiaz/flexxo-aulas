#include "stdio.h"
#include "conio.h"

int count;
int idade;

int main(){
    count = 1;
    while(count <= 15){
       printf("Informe a idade: ");
       scanf("%d", &idade);
       if(idade >= 18){
          printf("\nMaior de idade");          
       }else{
          printf("\nMenor de idade");          
       }
       count = count + 1;
    }
    printf("Fim");          
    getch();
}



