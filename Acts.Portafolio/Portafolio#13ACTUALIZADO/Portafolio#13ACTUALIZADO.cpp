#include <iostream>
#include <string>
using namespace std;

struct Orden {
	int revueltas;
	int frijolqueso;
	int queso;
	bool arroz;
};
typedef struct Orden pupas;

pupas solicitarOrden() {
	pupas p;
	cout << "Ingrese la Cantidad de Pupusas:" << endl;
	cout << "Revueltas: "; cin >> p.revueltas;
	cout << "Frijol con Queso: ";   cin >> p.frijolqueso;
	cout << "Queso: "; cin >> p.queso;
	string tipo = "asd";
	cout << "Arroz o Maiz?"; cin >> tipo;
	if (tipo == "arroz" || tipo == "Arroz") {
		p.arroz = true;
	}
	else if (tipo == "maiz" || tipo == "Maiz") {
		p.arroz = false;
	}

	return p;
}

void mostrarOrden(pupas p) {
	cout << "Revueltas " << p.revueltas << endl;
	cout << "frijol con queso: " << p.frijolqueso << endl;
	cout << "queso: " << p.queso << endl;
	if (p.arroz == true) {
		cout << "DE ARROZ." << endl;
	}
	else {
		cout << "DE MAIZ." << endl;
	}
	cout << endl;
}

struct Torden {
	Orden dato;
	struct Torden* sig;
};
typedef struct Torden Nodo;
Nodo* pInicio;

void insertarInicio(pupas p) {
	Nodo* nuevo = new Nodo;
	nuevo->dato = p;
	nuevo->sig = pInicio;

	pInicio = nuevo;
}

void insertarFinal(pupas p) {
	Nodo* nuevo = new Nodo;
	nuevo->dato = p;
	nuevo->sig = NULL;

	if (pInicio == NULL) {
		pInicio = nuevo;
	}
	else {
		Nodo* p = pInicio;
		Nodo* q = NULL;
		while (p != NULL) {
			q = p;
			p = p->sig;
		}
		q->sig = nuevo;
	}
}

void agregarOrden() {
	pupas p = solicitarOrden();
	bool continuar = true;
	do {
		int opcion = 0;
		cout << "\t1) Al principio\n\t2) Al final"
			<< "\n\tOpcion elegida: ";
		cin >> opcion;
		switch (opcion) {
		case 1: insertarInicio(p);
			continuar = false;
			break;
		case 2: insertarFinal(p);
			continuar = false;
			break;
		default: cout << "Opcion erronea!" << endl;
			break;
		}
	} while (continuar);
}

void mostrarLista() {
	Nodo* s = pInicio;

	while (s != NULL) {
		mostrarOrden(s->dato);
		s = s->sig;
	}
}

int main() {
	cout << "Inicializando..." << endl;
	pInicio = NULL;

	bool continuar = true;
	do {
		int opcion = 0;
		cout << "Menu: \n\t1) Agregar Orden de pupusas\n\t2) Ver orden"
			<< "\n\t3) Salir\n\tOpcion elegida: ";
		cin >> opcion;
		switch (opcion) {
		case 1: cout << "Agregando..." << endl;
			agregarOrden();
			break;
		case 2: cout << "Listando..." << endl;
			mostrarLista();
			break;
		case 3: continuar = false;
			break;
		default: cout << "Opcion erronea!" << endl;
			break;
		}
	} while (continuar);

	return 0;
}
