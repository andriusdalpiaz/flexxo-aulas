#include <stdio.h>
#include <conio.h>
#include <string.h>

char codigo[10];

int main(){
    printf("Informe o codigo do produto");
    gets(codigo);
    
    if(strcmp(codigo, "123ABC") == 0){
       printf("Valor do produto: 100");
       getch();
       return 0;
    }

    if(strcmp(codigo, "123QWE") == 0){
       printf("Valor do produto: 200");
       getch();
       return 0;
    }
    printf("Codigo invalido");
    getch();
}
