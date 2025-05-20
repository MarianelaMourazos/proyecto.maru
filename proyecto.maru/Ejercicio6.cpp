/*#include <iostream>
using namespace std;

int main() {
	int N, D;
	N = 0, D = 0;
	cout << "Ingrese un numero de 5 digitos: " << endl;
	cin >> N;
	if (N < 10000 || N>99999) {
		cout << "el numero ingresado no corresponde a un valor de 5 digitos, por favor ingrese otro valor. ";
		return 1;
	}
	int d1 = N / 10000;           
	int d2 = (N / 1000) % 10;      
	int d3 = (N / 100) % 10;       
	int d4 = (N / 10) % 10;        
	int d5 = N % 10;

	cout << d1 << endl;
	cout << d2 << endl;
	cout << d3 << endl;
	cout << d4 << endl;
	cout << d5 << endl;

	return 0;
}
*/