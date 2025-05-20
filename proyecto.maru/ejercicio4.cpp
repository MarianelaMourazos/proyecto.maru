#include <iostream>
using namespace std;

int main() {
	float R, D, C, A, pi;
	R = 0, D = 0, C = 0, A = 0, pi = 3, 14;
	cout << "Ingrese el valor del radio del circulo : ";
	cin >> R;
		D = 2 * R;
		C = 2 * pi * R; 
		A = pi * (R * R); 
		cout << "El diametro del circulo es: " << D << endl; 
		cout << "La circunferencia del circulo es: " << C << endl; 
		cout << "El area del circulo es: " << A << endl; 
}