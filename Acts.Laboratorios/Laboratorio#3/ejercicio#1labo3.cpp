#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

struct nodo{
    int dato;
    nodo *sig;
};

class ListaSimple{
private:
    nodo *pInicio;
    
public:
    ListaSimple(void);
    void insertarInicioLista(int);
    void mostrarLista(void);
    void mostrarListaRec(void);
    void mostrarListaRec(nodo *);
    void mostrarPares(void);
    void mostrarImpares(void);
};

ListaSimple::ListaSimple(void) {
    pInicio = NULL;
}

void ListaSimple::insertarInicioLista(int dato) {
    nodo *nuevo;

    nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

void ListaSimple::mostrarLista(void) {
    nodo *s = pInicio;

    while (s != NULL) {
        cout << s->dato << " ";
        s = s->sig;
    }
}

void ListaSimple::mostrarListaRec(void) {
    mostrarListaRec(pInicio);
}

void ListaSimple::mostrarListaRec(nodo *s) {
    if (s != NULL) {
        mostrarListaRec(s->sig);
        cout << s->dato << " ";
    }
}

void ListaSimple::mostrarPares(void){
    nodo *s = pInicio;
    
    while(s != NULL){
        if((s->dato)%2==0){
            cout << s->dato << " ";
        }
        s = s->sig;
    }
    
}

void ListaSimple::mostrarImpares(void){
    nodo *s = pInicio;
    
    while(s != NULL){
        if((s->dato)%2!=0){
            cout << s->dato << " ";
        }
        s = s->sig;
    }
    
}


int main(void)
{
    ListaSimple miLista;
    int dato, n, num;
    
    srand(time(NULL));
    num = rand();
    
    cout << "Cuantos datos quiere que contenga la lista? ";
    cin >> n;
    for(int i=0;i<n;i++){
        dato = num=1+rand()%(101-1);
        miLista.insertarInicioLista(dato);
    }
    
    
    cout << "Mostrar lista: ";
    miLista.mostrarLista();
    cout << "\nMostrar lista inversa: ";
    miLista.mostrarListaRec();
    cout << "\nMostrar lista de numeros pares: ";
    miLista.mostrarPares();
    cout << "\nMostrar lista de numeros pares: ";
    miLista.mostrarImpares();
    
    return 0;
}

