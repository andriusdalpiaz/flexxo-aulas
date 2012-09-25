#include "stdio.h"
#include "conio.h"

int a, b, c;

int main(){
    scanf("%d", &a);
    scanf("%d", &b);        
    c = a * b;
    printf("O valor da multiplicacao eh %d\n", c);
    getch();
}
