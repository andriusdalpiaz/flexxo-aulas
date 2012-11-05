#include "iostream"

using namespace std;

int x;

int main()
{
	x = 0;
	switch(x){
		case(9):
			cout << "Numero eh 9";
		break;
		case(8):
			cout << "Numero eh 8";
		break;
		default:
			cout << "Numero nao eh 8 e nem 9";
		break;
	}

	cin.get();
}
