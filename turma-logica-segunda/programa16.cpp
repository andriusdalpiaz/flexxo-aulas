#include "stdio.h"
#include "conio.h"

char nome[10];

int main(){
    gets(nome);
    printf("Olá");        
    for(int i = 9; i >= 0; i--){
       printf("%c", nome[i]);        
    }
    getch();
}
