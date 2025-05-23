/*#include <iostream>
using namespace std;

int main() {
	int fecha;
	cout << "Ingrese una fecha en formato AAAAMMDD: " << endl; 
	cin >> fecha; 
	if (fecha< 10000000 || fecha> 99999999) { 
		cout << "error, la fecha debe tener 8 digitos"; 
		return 1; 
	}
	int anio = fecha / 10000;
	int mes = (fecha / 100) % 100;
	int dia = fecha % 100;

	cout << "Anio: " << anio << endl;
	cout << "Mes: " << mes << endl;
	cout << "Dia: " << dia << endl;

	return 0; 

}
*/