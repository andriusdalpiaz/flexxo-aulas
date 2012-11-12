#include "iostream"

using namespace std;

char nome[10][2];
int ano_nasc[2];
int nota_a[2];
int nota_b[2];
int nota_c[2];
int media[2];

int main()
{
	// Entrada de dados
	for (int i = 0; i < 2; ++i)
	{
		cout << "Informe o nome do aluno";
		cin >> nome[i];

		cout << "\nInforme data de nascimento";
		cin >> ano_nasc[i];

		cout << "\nInforme a primeira nota";
		cin >> nota_a[i];

		cout << "\nInforme a segunda nota";
		cin >> nota_b[i];

		cout << "\nInforme a terceira";
		cin >> nota_c[i];
	}

	// Processamento

	for (int i = 0; i < 2; ++i)
	{
		media[i] = (nota_a[i] + nota_b[i] + nota_c[i]) / 3;	
	}

	// Saida

	for (int i = 0; i < 2; ++i)
	{
		cout << "\nNome:" << nome[i];
		cout << "\nAno de Nascimento:" << ano_nasc[i];
		cout << "\nNota Prova 1:" << nota_a[i];
		cout << "\nNota Prova 2:" << nota_b[i];
		cout << "\nNota Prova 3:" << nota_c[i];
		if(media[i] >= 6){
			cout << "\nAprovado?:" << "Sim";
		}

		if(media[i] == 5){
			cout << "\nAprovado?:" << "Recuperacao";
		}

		if(media[i] < 5){
			cout << "\nAprovado?:" << "Não";
		}
	}

	cin;
}
