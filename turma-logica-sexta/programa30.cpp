#include <iostream>
#include <conio.h>

using namespace std;

void ler_vetor(int vet[], int tamanho);
void somar_vetor(int vet_a[], int vet_b[], int vet_c[], int n);

int main(){
    int n;
    cout << "Informe quantos numeros deseja trabalhar: ";
    cin >> n;
    int vet_a[n];
    int vet_b[n];
    int vet_c[n];
    ler_vetor(vet_a, n);
    ler_vetor(vet_b, n);
    somar_vetor(vet_a, vet_b, vet_c, n);
    for(int i = 0; i < n; i++){
         cout << "valor vet_c" << vet_c[i] << "\n";
    }
    getch();
}

void ler_vetor(int vet[], int tamanho){
     for(int i = 0; i < tamanho; i++){
         cout << "informe o valor";
         cin >> vet[i];
     }
}

void somar_vetor(int vet_a[], int vet_b[], int vet_c[], int n){
     for(int i = 0; i < n; i++){
         vet_c[i] = vet_a[i] + vet_b[i];
     }    
}









