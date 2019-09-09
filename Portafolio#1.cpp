//Melissa Yaneeth Guardado Espinoza 00033719.
#include<iostream>
using namespace std;



void calculos (int num, int *doble, int *triple){
	*doble=2 *num;
	*triple=3 *num;
}

int main(){
	int numero =2, doble=0, triple=0;
	
	calculos(numero, &doble, &triple);
	cout<<"El doble de 2 es: "<<doble<<endl;
	cout<<"El triple de 2 es: "<<triple<<endl;
		

		int *puntero=&doble;
		cout<<"Direccion de la variable doble: "<<&doble<<endl;
		int *puntero2=&triple;
		cout<<"direccion de la variable triple: "<<&triple<<endl;
		int *puntero3=&numero;
		cout<<"direccion de la variable numero: "<<&numero<<endl;
		
		cout<<"valor de la variable doble: "<<(*puntero)<<endl;
		cout<<"direccion de la variable triple: "<<(*puntero2)<<endl;
		cout<<"direccion de la variable numero: "<<(*puntero3)<<endl;
	
	
return 0;
    
}
