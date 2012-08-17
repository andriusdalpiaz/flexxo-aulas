#include <iostream>
#include <conio.h>

using namespace std;

char nome[100];

int main ()
{
 while(true){
  cout << "Please enter an integer value: ";
  cin >> nome;
  cout << "The value you entered is " << nome;
  getch();
}
  return 0;
}
