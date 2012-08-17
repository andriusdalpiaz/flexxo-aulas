#include <stdio.h>
#include <conio.h>

int codigos[1000];
float valores[1000];
int continuar;
int count;

int main(){
    //Iniciar variaveis
    
    continuar = 1;
    count = 0;
    
    //Entrada de dados
    
    while(continuar > 0){
       printf("informe o codigo");
       scanf("%d", &codigos[count]);
       printf("informe o valor");
       scanf("%f", &valores[count]);
       count++;
       printf("voce deseja continuar? 1 sim / 0 nao");
       scanf("%d", &continuar);
    }
    
    // Processamento
    printf("RELARIO\n");
    
    for(int i = 0; i < count ; i++){
       printf("Codigo: %d\t", codigos[i]);
       printf("Valor: %f\t\n", valores[i]);
    }
    
    getch();
    
}








