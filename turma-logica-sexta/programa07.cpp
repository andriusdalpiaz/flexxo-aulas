#include <stdio.h>
#include <conio.h>
int x;
int main()
{
   x = 0;
   while(x <= 0)
   {
      printf("informe o valor de x");
      scanf("%d", &x);        
   } 
   getch();
}
