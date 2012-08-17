#include <stdio.h>
#include <conio.h>

int numeros[1000];
int numeros_comp;
int posicao_num_maior;
int count;
int continuar;

int main()
{
    continuar = 1;

    while(continuar > 0)
    {
        count = 0;
        
        printf("informe quantos numeros deseja comparar");
        scanf("%d", &numeros_comp);
        
        while(count < numeros_comp)
        {
           printf("informe o valor da posicao %d", count);
           scanf("%d", &numeros[count]);
           count++;
        }
        
        count = 0;
        posicao_num_maior = 0;
        
        while(count < numeros_comp)
        {
           if(numeros[count] > numeros[posicao_num_maior])
           {
               posicao_num_maior = count;  
           }
           count++;
        }
        
        printf("numero maior %d", numeros[posicao_num_maior]);        
        printf("deseja continuar o programa? 1 = SIM / 0 = NAO");
        scanf("%d", &continuar);
    }
}
