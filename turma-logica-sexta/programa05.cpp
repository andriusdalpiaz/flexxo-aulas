#include <stdio.h>
#include <conio.h>

int n1;
int n2;
int n3;
int n4;

int main(){
    
    // Entrada de dados
    
    printf("informe o valor de n1: ");
    scanf("%d", &n1);
    printf("informe o valor de n2: ");
    scanf("%d", &n2);
    printf("informe o valor de n3: ");
    scanf("%d", &n3);
    printf("informe o valor de n4: ");
    scanf("%d", &n4);
    
    // Processamento

    n1 = n1 * n1;
    n2 = n2 * n2;
    n3 = n3 * n3;
    n4 = n4 * n4;

    if(n3 >= 1000)
    {
       printf("o valor de n3 eh: %d\n", n3);       
    }
    else
    {
       printf("o valor de n1 eh: %d\n", n1);
       printf("o valor de n2 eh: %d\n", n2);
       printf("o valor de n3 eh: %d\n", n3);
       printf("o valor de n4 eh: %d\n", n4);
    }
    
    getch();
}
