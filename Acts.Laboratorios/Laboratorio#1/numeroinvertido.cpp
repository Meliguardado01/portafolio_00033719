//Melissa Yaneeth Guardado Espinoza 00033719.
//Ejercicio 12.
#include <iostream>

using namespace std;

int main(){

  int num, residuo,numInvert=0;
  
  cout<< "Ingrese un numero:"; 
  cin>> num;
  
  
while(num>0){
    residuo = num % 10;
    num = num / 10;
    numInvert=numInvert*10+residuo;
}
cout<<"El resultado es:"<<numInvert;

return 0;  
}
