#include <iostream>
using namespace std;

int main() {
	float A, B, C, suma, promedio, producto, mayor, menor, D;
	A = 0, B = 0, C = 0, suma = 0, promedio = 0, producto = 0, mayor = 0, menor = 0, D = 3;
	cout << "Ingrese un numero cualquiera: " << endl;
	cin >> A;
	cout << "Ingrese otro numero: " << endl;
	cin >> B;
	cout << "Ingrese otro numero: " << endl;
	cin >> C;
	suma = A + B + C;
	promedio = (A + B + C) / D;
	producto = A * B * C;

	if (A > B && A > C) {
		mayor = A;
	}
	else if (B > A && B > C) {
		mayor = B;
	}
	else {
		mayor = C;
	}
	if (A < B && A < C) {
		menor = A;
	}
	else if (B < A && B < C) {
		menor = B;
	}
	else {
		menor = C; 
	}
	cout << "La suma es: " << suma << endl;
	cout << "El promedio es: " << promedio << endl; 
	cout << "El producto es: " << producto << endl; 
	cout << "El mayor es: " << mayor << endl;
	cout << "El menor es: " << menor; 
} 
 