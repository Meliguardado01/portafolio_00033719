//Melissa Yaneeth Guardado Espinoza 00033719.
#include<iostream>
using namespace std;

int buscar(int x, int low, int high, int *arreglo){

	if(	low>high){
		return (-1);
	}	
	
	int mid=(low + high)/2;
		
	if(x== arreglo[mid])
	return mid;
	
	if(x< arreglo[mid]){
		return buscar(x, low, mid-1, arreglo);
	}else{
		return buscar(x, mid+1, high, arreglo);
	}
}

int main(void){
	int size=8;
int arreglo[8]={1,3,4,5,17,18,31,33};
int low=0;
int high=size-1;

int x = 0;
cout<<"Ingrese un numero: ";
cin>>x;
int i = buscar(x, low, high, arreglo);

if(i==-1){
	cout<<"El elemento no se encontro";
}
else{
	cout<<"El elemento se encuentra en la casilla: "<<i;
}


}

