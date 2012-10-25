#include "stdio.h"
#include "conio.h"
#include "string.h"

char codigo[4];
float preco_unit, qnt, valor;
int continuar;

int main(){
   preco_unit = 0;
   continuar = 1;
   while(continuar == 1){
      printf("\nInforme o codigo");
      gets(codigo);
      if(strcmp(codigo, "ABCD") == 0){
         preco_unit = 5.30;
      }
      if(strcmp(codigo, "XYPK") == 0){
         preco_unit = 6.00;
      }
      if(strcmp(codigo, "KLMP") == 0){
         preco_unit = 3.20;
      }
      if(strcmp(codigo, "QRST") == 0){
         preco_unit = 2.50;
      }
      if(preco_unit == 0){
         printf("\nCodigo invalido");
         continue;
      }
      printf("Informe a quantidade");
      scanf("%f", &qnt);
      valor = preco_unit * qnt;
      printf("Valor final: %f", valor);
   }        
}
