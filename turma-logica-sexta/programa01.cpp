#include <stdio.h>
#include <conio.h>
int a;
int b;
int main(){
    printf("Informe numero A: ");
    scanf("%d", &a);
    printf("Informe numero B: ");
    scanf("%d", &b);
    if(a > b)
    {
       printf("A eh maior que B");
    }
    else
    {
       printf("B eh maior que A");
    }
    
    getch();
}
