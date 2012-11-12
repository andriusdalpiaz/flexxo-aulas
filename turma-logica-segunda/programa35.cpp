#include "iostream"

using namespace std;

int num[6];
int num_negativos[6];
int a;
int main()
{
	for (int i = 0; i < 6; ++i)
	{
		cout << "Informe o numero: ";
		cin >> num[i];
	}
	int soma_p = 0;
	int soma_negativo = 0;
	
	for (int i = 0; i < 6; ++i)
	{
		if(num[i] < 0)
		{
			num_negativos[i] = 1;
			soma_negativo += num[i];
		}
		else
		{
			num_negativos[i] = 0;
			soma_p += num[i];
		}
	}

	cout << "Soma positivos: " << soma_p << "\n";
	cout << "Soma negativos: " << soma_negativo << "\n";
	cout << "Numeros positivos: ";
	for (int i = 0; i < 6; ++i)
	{
		if(num_negativos[i] == 0){
			cout << num[i] << "\t";
		}
	}
	cout << "\nNumeros negativos: ";
	for (int i = 0; i < 6; ++i)
	{
		if(num_negativos[i] == 1){
			cout << num[i] << "\t";
		}
	}

	for (int i = 5; i >= 0; --i)
	{
		for (int j = 5; j >= 0; --j)
		{
			if(num[i] < num[j])
			{
				a = num[i];
				num[i] = num[j];
				num[j] = a;
			}
		}
	}

	for (int i = 0; i < 6; ++i)
	{
		cout << "\nNumero: " << num[i];
	}

	cin;
}
