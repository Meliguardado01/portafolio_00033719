#include <string>
#include <iostream>

using namespace std;

int main()
{
    cout << "Ingrese un numero entero positivo: ";
    int num;
    string cad = "";
    cin >> num;
    if(num > 0){
        while(num>0){
           if(num%2 == 0)
                cad = "0" + cad;
            else
                cad = "1" + cad;
                num = num/2;
        }
        cout <<"Numero en binario: " <<cad;
    }
    else{
        if(num == 0)
            cout << "0";
        else
            cout << "Solo numeros mayores a cero";
    }
    return 0;
}
