//Melissa Yaneeth Guardado Espinoza 00033719.
#include<iostream>

using namespace std;

int raiz(int num, int r){
	if(num==1){	
		return 1;
	}else{
	float a= ((num/r)+r)/2;
	float b= ((num/a)+a)/2;
	
	while ((a-b)>0.0001){
	a= ((num/b)+b)/2;
	b= ((num/a)+a)/2;
	}
	return b;
	}
}


int main(){
    int numero;
    
	cout<<"Digite un numero:"<<endl;
	cin>>numero;

   	float r= raiz(numero,1);
   	
  cout<< "Resultado:" << r <<endl;
  
  return 0;
}
