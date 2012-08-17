#include <stdio.h>
#include <conio.h>

int m[10];
int a[10];
int x;

int main(){
    printf("informe os numeros");
    for(int i = 0; i < 10; i++){
       scanf("%d", &a[i]);
    }
    printf("informe o multiplicador");
    scanf("%d", &x);
    for(int i = 0; i < 10; i++){
       m[i] = a[i] * x;
    }
    for(int i = 0; i < 10; i++){
        printf("m[%d] = %d\n", i, m[i]);
    }
    
    getch();
}
