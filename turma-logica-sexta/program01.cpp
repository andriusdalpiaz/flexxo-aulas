#include <stdio.h>
#include <conio.h>

int vet[5];
int posicoes[5];

int main(){
    
    for(int i = 0; i < 5; i++){
       posicoes[i] = 0;
    }
    
    printf("informe os numeros");
    for(int i = 0; i < 5; i++){
       scanf("%d", &vet[i]);
    }
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i != j){
               if(vet[i] == vet[j]){
                  printf("posicao: ");       
                  printf("%d - %d\n", i, j);
                  posicoes[i] = 1;
               }
            }
        }
    }
    
    for(int i = 0; i < 5; i++){
        if(posicoes[i] == 1){
           printf("Numeros iguais: %d Posicao[%d] \n", vet[i], i);
        }
    }
    
    getch();
}
