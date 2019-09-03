//Melissa Yaneeth Guardado Espinoza 00033719.
//Ejercicio 18.
#include<iostream>
using namespace std;
int main()
{
int l;
int m;
int f=0;
int c=0;
cout<<".:Ingrese los siguientes datos: "<<endl;

cout<<"numero de filas: ";
cin>>f;
cout<<"numero de columnas:";
cin>>c;

for(m=0;m<=f;m++){
for(l=0; l<=c;l++){
		if(m<=l){
			cout<<m<<l<<"";	
		}
		else{
			cout<<"00";	
		}
	}cout<<endl;
}
return 0;
}
