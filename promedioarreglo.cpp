//Melissa Yaneeth Guardado Espinoza 00033719.
//Ejercicio 17.
#include<iostream>
using namespace std;


int main(void){
	
	int arreglo[10];
	int i;
	cout << "Ingrese 10 numeros: " << endl;
    for(i=0; i<10; i++){
        cout << "arreglo[" << i << "]: ";
        cin>>arreglo[i];
    }
    
    float suma=0;
    i=0;
    int n=10;
    float promedio=0;
    
    while(i<10){
	suma=suma+arreglo[i];
	i++;
	
	
	promedio=suma/n;
	
	
	}
	
	cout<<"La suma del arreglo es: "<<suma<<endl;
	
	cout<<"El promedio del arreglo es: "<<promedio<<endl;
	
	return 0;
	
}
