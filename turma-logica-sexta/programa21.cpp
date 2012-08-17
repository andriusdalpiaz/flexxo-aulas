#include <stdio.h>
#include <conio.h>
#include <string.h>

char nome[100];

int main(){
    gets(nome);
    printf("Ola, %s", nome);
    
    getch();
}
