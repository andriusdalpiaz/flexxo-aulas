#include <stdio.h>
#include <conio.h>

char nome[255];

int main(){
    printf("informe o seu nome: ");
    gets(nome);
    printf("Ola %s", nome);
    getch();
}
