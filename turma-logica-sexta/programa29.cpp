#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int calcula_delta(double b, double a, double c);

int main(){
    cout << calcula_delta(1, 2, 3);
    getch();
    return 0;
}

int calcula_delta(double b, double a, double c){
    return pow(b, 2) - (4 * a * c);
}
