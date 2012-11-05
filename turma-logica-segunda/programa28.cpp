#include "iostream"
using namespace std;

int cod_s[20];

int main()
{
    for(int i = 0; i < 20; i++){
            cod_s[i] = i * 5;
    }
    
    for(int i = 0; i < 20; i++){
            cout << cod_s[i] << "\n";
    }

	cin.get();
}
