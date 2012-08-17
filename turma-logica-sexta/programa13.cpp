#include <stdio.h>
#include <conio.h>

int result;

int main()
{
    for(int i = 0; i < 1000; i = i + 2)
    {
        result = result + i;                        
    }    
    printf("%d", result);
    getch();
}
