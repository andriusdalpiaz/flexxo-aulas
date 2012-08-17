#include <stdio.h>
#include <conio.h>

char obj[4];

int main()
{
   scanf("%s", obj);
   
   for(int i = 3; i >= 0; i--)
   {
       printf("%c", obj[i]);
   }    
   
   getch();
}
