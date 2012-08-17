#include <stdio.h>
#include <conio.h>

int num_a;

int main(){
    num_a = -1;
    for(int i = 0; i < 10; i = i + 2)
    {
        if(i == 5)
        {
          num_a = i;
          break;
        }
        else
        {
          num_a = 20;
        }
    }
    printf("%d", num_a);
    getch();    
}
