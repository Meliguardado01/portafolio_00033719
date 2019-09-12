//Melissa Yaneeth Guardado Espinoza 00033719.
#include <iostream>
using namespace std;

//En este paso se ejecuta
int multiplicacion(int a, int b){
	if(b==1){
		cout << "n=" << b << " caso base" << endl;
		return a;
	}else{
		int B=b -1;
		int prodr = multiplicacion(a, B);
		cout << "a=" << a << " b=" << b <<endl;
		return a+prodr;
	}
}
		
		
int main()
{
	int a=2;
	int b=1;
	cout << "multiplicacion de axb"<<endl;
	int r = multiplicacion(a,b);
	cout << "Resultado: "<< r << endl;
}
