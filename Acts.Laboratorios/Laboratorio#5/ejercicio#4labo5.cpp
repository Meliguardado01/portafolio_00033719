#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo{

int dato;
Nodo *der;
Nodo *izq;
Nodo *padre;
	
};

void menu();
Nodo *crearNodo(int, Nodo *);
void insertarNodo(Nodo *&, int, Nodo *);
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);
void eliminar(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *,Nodo *);
void destruirNodo(Nodo *);

Nodo *arbol = NULL;

int main(void){
	
	menu();
	
	
	
	return 0;
}

void menu(){
	
	int dato;
	int opcion;
	bool continuar = true;
	int contador = 0;
	
	do{
		
		cout<<"\t:MENU:."<<endl;
		cout<<"1.Insertar un nuevo nodo"<<endl;
		cout<<"2.Mostrar el arbol completo"<<endl;
		cout<<"3.Buscar un elemento en el arbol"<<endl;
		cout<<"4.Eliminar un nodo del arbol"<<endl;
		cout<<"5.Saber si es un arbol binario de busqueda"<<endl;
		cout<<"6.Salir"<<endl;
		cin>>opcion;
		
		switch(opcion){
			
			case 1: cout<<"\nDigite un numero: ";
			        cin>>dato;
			        insertarNodo(arbol,dato,NULL);
			        cout<<"\n";
			        system("pause");
			        break;
			        
			case 2: cout<<"Mostrando el arbol completo: \n\n";
			        mostrarArbol(arbol,contador);
			        cout<<"\n";
			        system("pause");
			        break;
			        
		   	case 3: cout<<"\nDigite el elemento a buscar";
		   	        cin>>dato;
		   	        if(busqueda(arbol,dato)== true){
		   	        	cout<<"\Elemento"<<dato<<" ha sido en contado en el ABB "<<endl;
					   }
					   else{
					   	cout<<"\nEl elemento no fue encontrado"<<endl;
					   }
					   cout<<endl;
					   system("pause");
					   break;
			        
			 case 4: cout<<"\nDigite el numero a eliminar: ";
			         cin>>dato;       
			         eliminar(arbol,dato);
			         cout<<"\n";
			         system("pause");
			         break;
			         
			         
			 case 5: if(arbol == NULL){
			 	         
			 	     cout<<"Error el arbol esta vacio, no puedo saber si es binario de busqueda"<<endl;
			         }
			            
			         else{
					
			         cout<<"El arbol si es binario de busqueda"<<endl;
			         }
			         system("pause");
					 break;
					
			case 6: break;
		}
		system("cls");
	}while(continuar);
}

Nodo *crearNodo(int n, Nodo *padre){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	
	return nuevo_nodo;
}

void insertarNodo(Nodo *&arbol, int n, Nodo *padre){
	
	if(arbol == NULL){
		
		Nodo *nuevo_nodo = crearNodo(n,padre);
		arbol = nuevo_nodo;
	}
	else{
		int valorRaiz = arbol->dato;
		if(n < valorRaiz){
			insertarNodo(arbol->izq,n,arbol);
		}
		else{
			insertarNodo(arbol->der,n,arbol);
		}
		
		
	}
}

void mostrarArbol(Nodo *arbol, int cont){
	
	if(arbol == NULL){
		return;
	}
	else{
		mostrarArbol(arbol->der, cont+1);
		for(int i=0; i<cont; i++){
			cout<<"    ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,cont + 1);
	}
}


bool busqueda(Nodo *arbol, int n){
	if(arbol == NULL){
		return false;
	}
	else if(arbol->dato == n){
		return true;
	}
	else if( n < arbol->dato){
		return busqueda(arbol->izq,n);
	}
	else{
		return busqueda(arbol->der,n);
	}
}

void eliminar(Nodo *arbol, int n){
	
	if(arbol == NULL){
		return;
	}
	else if(n < arbol->dato){
		eliminar(arbol->izq,n);
	}
	else if(n > arbol->dato){
		eliminar(arbol->der,n);
	}
	else{
		eliminarNodo(arbol);
	}
}

Nodo *minimo(Nodo *arbol){
	if( arbol == NULL){
		return NULL;
	}
	if(arbol->izq){
		return minimo(arbol->izq);
	}
	else{
		return arbol;
	}
}

void reemplazar(Nodo *arbol, Nodo *nuevoNodo){
	if(arbol->padre){
		if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq = nuevoNodo;
		}
		else if(arbol->dato == arbol->padre->der->dato){
			arbol->padre->der = nuevoNodo;
		}
	}
	if(nuevoNodo){
		nuevoNodo->padre = arbol->padre;
	}
}

void destruirNodo(Nodo *nodo){
	nodo->izq = NULL;
	nodo->der = NULL;
	
	delete nodo;
}

void eliminarNodo(Nodo *nodoEliminar){
	
	if(nodoEliminar->izq && nodoEliminar->der){
		Nodo *menor = minimo(nodoEliminar->der);
		nodoEliminar->dato = menor->dato;
		eliminarNodo(menor);
	
		
	}
	
	
	else if(nodoEliminar->izq){
		reemplazar(nodoEliminar,nodoEliminar->izq);
		destruirNodo(nodoEliminar);
	}
	else if(nodoEliminar->der){
		reemplazar(nodoEliminar,nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}
	else{
		reemplazar(nodoEliminar,NULL);
		destruirNodo(nodoEliminar);
	
	
		
		
	}
	
	



}
