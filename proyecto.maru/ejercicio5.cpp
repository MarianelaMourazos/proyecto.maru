#include <iostream>
using namespace std;

int main() {
	float N, cubo, cuadrado; 
	N = 0;
	cout << "Num\Cuadrado\Cubo" << endl; 
	while (N < 10) {
		cuadrado = N * N; 
		cubo = N * N * N; 
		cout << N << "\t " << cuadrado << "\t" << cubo << endl; 
		N++;
	}
	return 0; 
} 