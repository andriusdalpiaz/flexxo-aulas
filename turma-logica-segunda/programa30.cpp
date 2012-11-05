#include "iostream"
#include "conio.h"

using namespace std;

int codigo[10];
float preco[10];

int main()
{
    cout << "=== Cadastro de produtos ===\n";
    
    for(int i = 0; i < 2; i++)
    {
       cout << "Informe o codigo";       
       cin >> codigo[i];
       cout << "Informe o preco";       
       cin >> preco[i];
    }
    
    for(int i = 0; i < 2; i++)
    {
       cout << "\nCodigo: " << codigo[i];
       cout << "\nPreco:" << preco[i];
    }
    
    getch();
}
