#include "iostream"

using namespace std;

int num[6];
int num_p[6];

int main()
{
	for (int i = 0; i < 6; ++i)
	{
		cout << "Informe o numero: ";
		cin >> num[i];
	}
	int soma_p = 0;
	int soma_i = 0;
	
	for (int i = 0; i < 6; ++i)
	{
		if((num[i] % 2) == 0)
		{
			num_p[i] = 1;
			soma_p += num[i];
		}
		else
		{
			num_p[i] = 0;
			soma_i += num[i];
		}
	}

	cout << "Soma pares: " << soma_p << "\n";
	cout << "Soma impares: " << soma_i << "\n";
	cout << "Numeros Pares: ";
	for (int i = 0; i < 6; ++i)
	{
		if(num_p[i] == 1){
			cout << num[i] << "\t";
		}
	}
	cout << "\nNumeros impares: ";
	for (int i = 0; i < 6; ++i)
	{
		if(num_p[i] == 0){
			cout << num[i] << "\t";
		}
	}

	cin;
}
