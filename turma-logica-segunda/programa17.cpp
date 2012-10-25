#include "stdio.h"
#include "conio.h"
#include "string.h"

int main(){
    char nome[] = "Marcos";
    char nome2[] = "Marcon";
    int x = 0;
    
    x = strcmp(nome, nome2);
    
    printf("%d", x);
    
    getch();
}
