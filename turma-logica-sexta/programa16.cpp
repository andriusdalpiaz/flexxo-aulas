#include <stdio.h>
#include <conio.h>

int vet[5];

int main(){
   for(int i = 0; i < 5; i++){
      scanf("%d", &vet[i]);
   }
   printf("\n");
   for(int i = 4; i >= 0; i--){
      printf("%d\n", vet[i]);
   }
   getch();
}
