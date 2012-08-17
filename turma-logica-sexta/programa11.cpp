#include <stdio.h>
#include <conio.h>

int count;

int main()
{
    count = 1;
    while(count <= 100)
    {
        if((count % 10) == 0)
        {
           printf("ola mundo %d\n", count);
        }
        count++;
    }
    getch();
}
