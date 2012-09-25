#include "stdio.h"
#include "conio.h"

int km, combustivel, rodados;

int main(){
    printf("Informe a quilometragem");
    scanf("%d", &km);
    printf("Informe a combustivel");
    scanf("%d", &combustivel);
    rodados = km / combustivel;
    printf("km rodados: %d", rodados);
    getch();
}
