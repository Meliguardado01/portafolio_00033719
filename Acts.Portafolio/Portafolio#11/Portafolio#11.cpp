#include <iostream>
#include <string>

using namespace std;

int array[10];

int posicion (int tamanio, int *front, int *cont) {

	if (array[0]==0) {
		return 0;
	}
	else {
		(*cont)++;
		cout << "Frente: " << *front << "^ cantidad de datos: " << *cont<<endl;
		return ((*front)+*cont)%tamanio; 
	}

}



int main() {
	int frente = 0;
	int tam = 5;
	int cantidad = 0;

	array[posicion(5, &frente, &cantidad)] = 1;
	array[posicion(5, &frente, &cantidad)] = 2;
	array[posicion(5, &frente, &cantidad)] = 3;
	array[posicion(5, &frente, &cantidad)] = 4;
	array[posicion(5, &frente, &cantidad)] = 5;

	remove();


	for (int i = 0; i < 10; i++) {
		cout << "arreglo [" << i << "]: " << array[i]<< endl;
	}

	return 0;
}
