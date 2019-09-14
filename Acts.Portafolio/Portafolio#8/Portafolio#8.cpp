#include<iostream>
using namespace std;

void recursividad(int x, int y);


int main(void){

int c;
int contador=0;

cout<<"Ingrese los elementos: ";
cin>>c;

recursividad(c, contador);


return 0;	
}

void recursividad(int x, int y){
	
	y++;
	
	if(x==y){
		cout<<y;
	}
	
	else{
		cout<<y;
		recursividad(x,y);
		cout<<y;
	}
	
}
