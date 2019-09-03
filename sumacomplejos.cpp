//Melissa Yaneeth Guardado Espinoza 00033719.
//Ejercicio 23.
# include <iostream>
# include <stdlib.h>
using namespace std ;
 
void sumarComplejos( int , int , int , int , int & , int & ) ;
 
int main ()
{
	int partReal [ 3 ] ;
	int partImagi [ 3 ] ;
	int resultadoReal ;
	int resultadoIma ;
	char * nums[] = { "Primer" , "Segundo" , "Tercer" } ;
 
	
	for ( int i = 0 ; i < 3 ; i ++ )
	{
	    cout << "\n Parte Real del " << nums [ i ] << " Numero : " ;
		cin >> partReal [ i ] ;
		cout << "\n Parte Imaginaria del " << nums [ i ] << " Numero : " ;
		cin >> partImagi [ i ] ;
	}
	
	
	sumarComplejos( partReal [ 0 ] , partImagi [ 0 ] , partReal [ 1 ] , partImagi [ 1 ] , resultadoReal , resultadoIma ) ;
 
	
	sumarComplejos ( resultadoReal , resultadoIma , partReal [ 2 ] , partImagi [ 2 ] , resultadoReal , resultadoIma ) ;
 
	
	cout << "\n Resultado Parte Real : " << resultadoReal ;
	cout << "\n Resultado Parte Imaginaria : " << resultadoIma ;
	
 
 
	
	
	return 0 ;
}
 
void sumarComplejos( int real1 , int imagi1 , int real2 , int imagi2 , int & resReal , int & resIma )
{
	resReal = real1 + real2 ;
	resIma = imagi1 + imagi2 ;
}
