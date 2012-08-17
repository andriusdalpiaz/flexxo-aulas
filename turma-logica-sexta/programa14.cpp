#include <stdio.h>
#include <conio.h>

int valores[3];
int menor;
int posicao_menor;

int main()
{
   //Entrada de dados
   posicao_menor = 0;

   for(int i = 0; i < 3; i++)
   {
       scanf("%d", &valores[i]);
   }
   
   //Processamento
   for(int i = 0; i < 3; i++)
   {
       if(valores[i] < valores[posicao_menor])
       {
          posicao_menor = i;                  
       }
   }
   
   
   printf("o menor valor eh: %d", valores[posicao_menor]);
   getch();
}
