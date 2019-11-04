#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo{

int altura;
int valor;
Nodo *izq = NULL;
Nodo *der = NULL;		
};

Nodo *raiz = NULL;
Nodo *padre = NULL;

void buscar_colocar(Nodo *paso, int valorc, Nodo *nuev){
	
	if(paso!=NULL){
		if(valorc < paso->valor && paso -> izq==NULL){
			
			paso->izq = nuev;
			nuev->altura = paso->altura+1;
			return;
		}
		if(valorc > paso->valor && paso -> der==NULL){
			paso->der = nuev;
			nuev->altura = paso->altura+1;
			return;
		}
		if(valorc < paso->valor && paso -> izq!=NULL){
			buscar_colocar(paso -> izq, valorc, nuev);
			return;
		}
		if(valorc > paso->valor && paso -> der!=NULL){
			buscar_colocar(paso -> der, valorc, nuev);
			return;
		}
	}
}

void mostrar(Nodo *padrecin){
	if(padrecin!=NULL){
		mostrar(padrecin->izq);
		cout<<"La altura del nodo: "<<padrecin->valor<<" "<<"es: "<<" "<<padrecin->altura<<endl;
		mostrar(padrecin->der);
		
	}
}

void  ingresar(int valorcin){
	
	Nodo *nuevo= new Nodo();
	nuevo->valor=valorcin;
	if(raiz == NULL){
		raiz = nuevo;
		raiz->altura=0;
	}
	else{
	
	buscar_colocar(raiz,valorcin, nuevo);	
	}
}

int maximaAltura(int a1_izq , int a2_der){
	
	if(a1_izq>a2_der){
		return a1_izq;
	}
	else{
		return a2_der;
	}
	
}

int alturaArbol(Nodo *padre){
	if(padre==NULL){
		return 0;
	}
	else{
		return(1+maximaAltura(alturaArbol(padre->izq),alturaArbol(padre->der)));
	}
	
}




int main (void){
	
	ingresar(68);
	ingresar(34);
	ingresar(21);
	ingresar(43);
	ingresar(96);
	ingresar(75);
	ingresar(99);
	mostrar(raiz);		
	
	int alturaDelArbol=alturaArbol(raiz);
	cout<<"\n"<<"La altura del arbol es: "<<alturaDelArbol;
		
	
	
	
	return 0;
}
