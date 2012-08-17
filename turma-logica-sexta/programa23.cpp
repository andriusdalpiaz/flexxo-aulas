#include <stdio.h>
#include <conio.h>
#include <string.h>


int continuar;

char nome1[100];
char nome2[100];

int main(){
    continuar = 1;
    while(continuar == 1){
       printf("Informe o primeiro nome: ");
       gets(nome1);
       printf("Informe o segundo nome: ");
       gets(nome2);
       if(strcmp(nome1, nome2) == 0){
          printf("Nomes iguais\n");                           
       }else{
          printf("Nomes diferentes\n");
       }
       printf("Deseja continuar? 1Sim / 2Nao");
       scanf("%d", &continuar);
    }
    printf("Fim");
    getch();
}










