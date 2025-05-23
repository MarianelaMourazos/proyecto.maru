#include <iostream>
using namespace std;

int main() {
	int numero;
	float quinta, tercera, resto; 

	cout << "Ingrese cualquier numero entero: "; 
		cin >> numero; 

		quinta = numero / 5.0 ; 
		resto = numero % 5; 
		tercera = quinta / 3.0; 

		cout << "Dividiendo el numero por 5, obtenemos: " << quinta<< endl; 
		cout << "El resto de dicha division es: " << resto<<  endl; 
		cout << "La tercera parte del primer valor obtenido al dividir por 5 es: " << tercera; 
}