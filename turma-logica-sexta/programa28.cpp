#include <iostream>
#include <conio.h>

using namespace std;

char nome[100];

int main(){
    cout << "Informe o seu nome";
    cin  >> nome;
    
    cout << "numero de letras: " << strlen(nome);
    getch();    
}
