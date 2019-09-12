//Melissa Yaneeth Guardado Espinoza 00033719.
#include <iostream>
using namespace std;

int cont = 0;
void colores(int Num, char *desde, char *hasta) {
    
	char *arreglo[] = { "", "Azul", "Verde", "Amarillo", "Naranja", "Rojo" };
	
	cout << "\t\tStep " << ++cont;
	
	cout << ": Movimiento " << arreglo[Num] << " de " << desde << " a " << hasta << "\n";
}

void torre(int a, char *desde, char *auxiliar, char *hasta) {
	if (a == 1) {
		colores(1, desde, hasta);
	}
	else {
		torre(a - 1, desde, hasta, auxiliar);
		colores(a, desde, hasta);
		torre(a - 1, auxiliar, desde, hasta);
	}
}

int main() {
	int n;
	cout <<"Torre de Hanoi"<<endl;
	cout << "Ingrese el numero de discos: ";
	cin >> n;
	cout << "endl";
	torre(n, "Nuevo", "Auxiliar", "Final");

	return 0;
}
