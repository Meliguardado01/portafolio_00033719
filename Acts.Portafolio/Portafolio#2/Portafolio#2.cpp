//Melissa Yaneeth Guardado Espinoza 00033719.
#include <iostream>

using namespace std;


float mediana(int arr[], int tamano){
	int pos=tamano/2;
	float m=0;
	if(tamano%2==0){
		m=(float)(arr[pos-1]+arr[pos])/2;
	}
	
	else{
		m=arr[pos-1];
}

	return m;
	
}

int main(){
	
	int tamano=6;
	int arr[]={8,4,7,3,6,1};
	
	int i,j,aux;
	
	for(i=0; i<6; i++){
		
    for(j=0; j<6; j++){
	
	if(arr[j] > arr[j+1]){
		
		aux=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=aux;
	}		

	}

	}
	
	cout<<"Imprimiendo arreglo ordenado: "<<endl;
	for(int i=0; i<6; i++){
	cout<<arr[i]<<endl;
	}
	
	mediana(arr, tamano);
	cout<<"La mediana es: "<<mediana(arr, tamano)<<endl;
	
	return 0;
}
