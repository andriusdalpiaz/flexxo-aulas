#include <iostream>
#include <conio.h>

using namespace std;

int notas[5];
int alunos_acima_media;
int media;

int ler_notas();
int calcular_media();
int numero_alunos();

int main(){
    ler_notas();
    calcular_media();
    numero_alunos();
    getch();
}

int ler_notas(){
   for(int i = 0; i < 5; i++){
       cin >> notas[i];
   }            
}

int calcular_media(){
   int total = 0;
   for(int i = 0; i < 5; i++){
       total += notas[i];
   }  
   media = total / 5;
   cout << "Media: " << media;
}

int numero_alunos(){
   alunos_acima_media = 0;
   for(int i = 0; i < 5; i++){
      if(notas[i] > media){
         alunos_acima_media++;
      }
   }
   cout << "Alunos acima da media " << alunos_acima_media;
}

