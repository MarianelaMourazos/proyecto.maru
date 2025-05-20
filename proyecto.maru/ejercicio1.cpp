#include <iostream>
using namespace std;

//hola
int main() {
	float N, L, suma, resta, producto, cociente;
	N = 0, L = 0, suma = 0, resta = 0, producto = 0, cociente = 0;
	cout << "Ingrese un numero cualquiera: ";
	cin >> N;
	cout << "Ingrese un segundo numero a eleccion: ";
	cin >> L;

	suma = N + L;
	resta = N - L;
	producto = N * L;
	cociente = N / L;

	cout << "La suma de los numeros ingresados es: " << suma;
	cout << "  La resta de los numeros es: " << resta;
	cout << "  El producto es: " << producto;
	cout << "  El cociente es: " << cociente;
	return 0;
}

