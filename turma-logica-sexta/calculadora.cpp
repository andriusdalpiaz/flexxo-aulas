#include <stdio.h>
#include <conio.h>

float num_a, num_b, result;
char op;

int main(){
   printf("informe o valor a");
   scanf("%f", &num_a);
   printf("informe o valor b");
   scanf("%f", &num_b);
   printf("informe a operacao ( + , * , / , -)");
   scanf("%s", &op);
   
   switch(op){
      case('+'):
                result = num_a + num_b;
      break;
      case('-'):
                result = num_a - num_b;
      break;
      case('/'):
                result = num_a / num_b;
      break;
      case('*'):
                result = num_a * num_b;
      break;
   }
   ("resultado: %f", result);
   getch();
}
