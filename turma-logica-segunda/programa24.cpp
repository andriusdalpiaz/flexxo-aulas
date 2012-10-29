#include "iostream"
#include "string.h"

using namespace std;

char continuar;
char nome[200];
float horas;
float salario;
int nivel;


int main()
{
	continuar = 's';
	while(continuar == 's')
	{
		cout << "Informe o nome do professor:";
		cin >> nome;
		
		cout << "Informe as horas:";
		cin >> horas;
		
		cout << "Informe o nivel:";
		cin >> nivel;

		if(nivel == 1)
		{
			salario = horas * 12;
		}
		
		if(nivel == 2)
		{
			salario = horas * 17;	
		}

		if(nivel == 3)
		{
			salario = horas * 25;
		}

		if(nivel < 1 || nivel > 3)
		{
			cout << "Nivel invalido";
			continue;
		}

		cout << "O professor " << nome << " vai ganhar " << salario ;

		cout << "Deseja continuar (s/n)";

		cin >> continuar;
	}
	cin.get();	
}



