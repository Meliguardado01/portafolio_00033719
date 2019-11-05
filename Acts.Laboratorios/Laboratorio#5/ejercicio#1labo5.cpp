#include <iostream>
#include <stdlib.h>
using namespace std;

struct nodo
{
int info;
struct nodo *izq;
struct nodo *der;
};

int numNodos = 0;

typedef struct nodo Nodo;
typedef struct nodo *Arbol;
Arbol crearArbol(int x)
{
Arbol p = new Nodo;
p->info = x;
p->izq = NULL;
p->der = NULL;
return p;
}

int suma(Arbol a){
   int info;
   if(a==0)
   return 0;
   return a->info + suma(a->izq) + suma(a->der);
	
}


void Nodos(Arbol a, int n)
{
if (a == NULL)
return;
Nodos(a->der, n + 1);
for (int i = 0; i < n; i++)
cout << " ";
numNodos++;
cout << a->info << endl;
Nodos(a->izq, n + 1);
}

int Niveles(Arbol a)
{
int AltIzq, AltDer;
if (a == NULL)
return -1;
else
{
AltIzq = Niveles(a->izq);
AltDer = Niveles(a->der);
if (AltIzq > AltDer)
return AltIzq + 1;
else
return AltDer + 1;
}
}

void asignarIzq(Arbol a, int unDato)
{
if (a == NULL)
cout << "Error: arbol vacio" << endl;
else if (a->izq != NULL)
cout << "Error: subarbol IZQ ya existe" << endl;
else
a->izq = crearArbol(unDato);
}
void asignarDer(Arbol a, int unDato)
{
if (a == NULL)
cout << "Error: arbol vacio" << endl;
else if (a->der != NULL)
cout << "Error: subarbol DER ya existe" << endl;
else
a->der = crearArbol(unDato);
}
void agregarNodo(Arbol a)
{
int numero = 0;
cout << "Numero a agregar: ";
cin >> numero;
Arbol p = a;

while (true)
{
if (numero == p->info)
{
cout << "Error: " << numero << " ya existe" << endl;
return;
}
else if (numero < p->info)
{

if (p->izq == NULL)
break;
else
p = p->izq;
}
else
{

if (p->der == NULL)
break;
else
p = p->der;
}
}
if (numero < p->info)
asignarIzq(p, numero);
else
asignarDer(p, numero);
}

void preorden(Arbol a)
{
if (a != NULL)
{
cout << " " << a->info;
preorden(a->izq);
preorden(a->der);
}
}
void inorden(Arbol a)
{
if (a != NULL)
{
inorden(a->izq);
cout << " " << a->info;
inorden(a->der);
}
}
void postorden(Arbol a)
{
if (a != NULL)
{
postorden(a->izq);
postorden(a->der);
cout << " " << a->info;
}
}
void recorrerArbol(Arbol a)
{
cout << "Recorrido PRE orden:";
preorden(a);
cout << endl;
cout << "Recorrido IN orden:";
inorden(a);
cout << endl;
cout << "Recorrido POST orden:";
postorden(a);
cout << endl;

}
int main()
{
int variable = 0;
cout << "Inicializando arbol...\nValor contenido en la raiz: ";
cin >> variable;
Arbol arbol = crearArbol(variable);
bool continuar = true;
do
{
int opcion = 0;
cout << "Menu: \n\t1) Agregar\n\t2) Recorrer\n\t3) Cant. nodos\n\t4) Cant. niveles\n\t5) Suma"
<< "\n\t6) Salir\n\tOpcion elegida: ";
cin >> opcion;
switch (opcion)
{
case 1:
agregarNodo(arbol);
break;
case 2:
recorrerArbol(arbol);
break;
case 3:
Nodos(arbol, 0);
cout<<"el numero de nodos es: ";
cout<<numNodos<<endl;
break;
case 4:
int h;
h = Niveles(arbol);
cout<<"El numero de niveles es: "<<h<<endl;
break;
                  case 5:
                  cout<<"la suma de los nodos es: "<<suma(arbol)<<endl;
                 break;
                 case 6:
continuar = false;
break;
default:
cout << "Opcion erronea!" << endl;
break;
}
} while (continuar);
return 0;
}
