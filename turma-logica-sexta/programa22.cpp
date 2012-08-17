#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

char codigo[10];

int main(){
    cout << "Informe o codigo do produto";
    cin >> codigo;
    
    if(strcmp(codigo, "123ABC") == 0){
       printf("Valor do produto: 100");
       getch();
       return 0;
    }

    if(strcmp(codigo, "123QWE") == 0){
       printf("Valor do produto: 200");
       getch();
       return 0;
    }
    printf("Codigo invalido");
    getch();
}
