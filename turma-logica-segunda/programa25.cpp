#include "iostream"
#include "string.h"

char continuar;
char nome[200];
int ok;
using namespace std;

int main()
{
	continuar = 's';
	ok = 0;

	while(continuar == 's')
	{
		cout << "Nome: ";
		cin >> nome;
		
		if(strcmp(nome, "Marcos") == 0) ok = 1;
	
		if(strcmp(nome, "Edson") == 0 ) ok = 1;
		
		if(strcmp(nome, "Gabriel") == 0 ) ok = 1;
		
		if(strcmp(nome, "Julvane") == 0 ) ok = 1;
		
		if(strcmp(nome, "Wagner") == 0 ) ok = 1;

		if(strcmp(nome, "Daniel") == 0 ) ok = 1;

		if(strcmp(nome, "Felipe") == 0 ) ok = 1;

		if(ok == 0)
		{
			cout << "Nenhum aluno encontrado com o nome digitado";
		}
		else
		{
			cout << "O aluno faz parte da turma";
			ok = 0;
		}

		cout << "\nDeseja continuar?(s/n)";
		cin >> continuar;
	}
}
