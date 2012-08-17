#include <stdio.h>
#include <conio.h>
#include <string.h>

char nome[40];

int main(){
    scanf("%s", &nome);
    printf("nome: %s", nome);
    printf("%d", nome == "marcos");
    getch();
}
