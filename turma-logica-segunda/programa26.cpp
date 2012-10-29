#include "iostream"

using namespace std;

float saque;
int notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas1 = 0;
int continuar;



int main()
{

	continuar = 1;
	while(continuar == 1){

		cout << "Informe quanto deseja sacar";
		cin >> saque;
		
		while(saque >= 0){
			if(saque > 100){
				saque -= 100;
				notas100++;
				cout << saque;
				continue;
			}
			
			if(saque > 50){
				saque -= 50;
				notas50++;
				cout << saque;
				continue;
			}		

			if(saque > 20){
				saque -= 20;
				notas20++;
				cout << saque;
				continue;
			}

			if(saque > 10){
				saque -= 10;
				notas10++;
				cout << saque;
				continue;
			}

			if(saque > 5){
				saque -= 5;
				notas5++;
				cout << saque;
				continue;
			}

			if(saque > 1){
				saque -= 1;
				notas1++;
				cout << saque;
				continue;
			}
			break;
		}

		cout 	<< "\nNotas 100" << notas100
				<< "\nNotas 50" << notas50
				<< "\nNotas 20" << notas20
				<< "\nNotas 10" << notas10
				<< "\nNotas 5" << notas5
				<< "\nNotas 1" << notas1;

	}
}
