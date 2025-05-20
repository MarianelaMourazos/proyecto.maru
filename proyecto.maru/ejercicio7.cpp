#include <iostream>
using namespace std;

int main() {
    int dia, mes, anio;

    cout << "Ingresa el dia: ";
    cin >> dia;
    cout << "Ingresa el mes: ";
    cin >> mes;
    cout << "Ingresa el año (4 digitos): ";
    cin >> anio;

    // Precondiciones
    if (dia < 1 || dia > 31) {
        cout << "Error: Dia fuera de rango (1-31)." << endl;
        return 1;
    }
    if (mes < 1 || mes > 12) {
        cout << "Error: Mes fuera de rango (1-12)." << endl;
        return 1;
    }
    if (anio < 1000 || anio > 9999) {
        cout << "Error: Año fuera de rango (1000-9999)." << endl;
        return 1;
    }

    // Construcción manual del número AAAAMMDD
    int fecha = anio * 10000 + mes * 100 + dia;

    cout << "Fecha en formato AAAAMMDD: " << fecha << endl;

    return 0;
}

