#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

char nome1[100];
char nome2[100];
char nome3[100];

int main(){
    cout << "Informe o primeiro nome";
    cin >> nome1;
    
    cout << "Informe o segundo nome";
    cin >> nome2;
    
    cout << strcat(nome2, nome1);
    
    cout << strlen(nome1);
    cout << strlen(nome2);
    
    getch();
}
