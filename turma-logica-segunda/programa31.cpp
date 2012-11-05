#include "iostream"

using namespace std;

int x[4];
int a;

int main()
{
	cout << "Informe os numeros\n";

	for (int i = 0; i < 4; ++i)
	{
		cin >> x[i];
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if(x[i] < x[j])
			{
				a = x[i];
				x[i] = x[j];
				x[j] = a;
			}
		}
	}
	
	for (int i = 0; i < 4; ++i)
	{
		cout << x[i] << "\n";
	}

	cin.get();
}
