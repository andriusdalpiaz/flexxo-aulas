#include <stdio.h>
#include <conio.h>

int numeros[3];
int contador;

int main(){
    
    contador = 0;
    
    while(contador < 3){
        printf("Informe o valor da posicao %d: ", contador);
        scanf("%d", &numeros[contador]);
        contador = contador + 1;
    }
    
    contador = 0;
    
    while(contador < 3){
        printf("o valor %d ", contador);
        printf("eh %d\n", numeros[contador]);
        contador = contador + 1;
    }
    
    getch();
}
