#include <stdio.h>
#include <conio.h>

int sexo;
float h;
float peso;

int main(){
    printf("Informe o sexo 1 => M 2 => F");
    scanf("%d", &sexo);
    printf("Informe a altura");
    scanf("%f", &h);
    if(sexo == 1)
    {
       peso = ((72.2 * h) - 58);
    }
    else
    {
       peso = ((62.1 * h) - 44.7);    
    }
    
    printf("o peso ideal eh: %f", peso);
    
    getch();
}
