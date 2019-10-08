#include<iostream>
using namespace std;

struct nodo{
	int dato;
	nodo *ant;
	nodo *sig;
	

nodo *crear(nodo *cab, int d){
	nodo *nuevo= new nodo;
	nuevo->dato=d;
	nuevo->ant=NULL;
	nuevo->sig=NULL;
	cab=nuevo;
	return cab;
}
nodo *insertar(nodo *cab, int d){
	nodo *nuevo= new nodo;
	nuevo->dato=d;
	nuevo->ant=NULL;
	nuevo->sig=cab;
	cab->ant=nuevo;
	cab=nuevo;
	cout<<nuevo->dato;
	return cab;
}

void mostrar(nodo *cab){
	nodo *aux=cab;
	while(aux !=NULL){
	cout<<aux->dato<<endl; 
	aux=aux->sig;
}
}
void mostrar2(nodo *cab){
	nodo *aux=cab;
	while(aux->sig!=NULL){
		aux=aux->sig;
	}
	while(aux !=NULL){
	cout<<aux->dato<<endl; 
	aux=aux->ant;
}
}
};

int main(void){
	

nodo *cab=NULL;
	nodo *p;
	cab=p->crear(cab,4);
	cab=p->insertar(cab,3);
	cab=p->insertar(cab,2);
    cab=p->insertar(cab,1);
  cout<<"datos de la lista"<<endl;
	p->mostrar(cab);
	cout<<"datos de la lista inversos"<<endl;
	p->mostrar2(cab);
	
	return 0;
}
