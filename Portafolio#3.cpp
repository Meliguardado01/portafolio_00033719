//Melissa Yaneeth Guardado Espinoza 00033719.
#include<iostream>
#include<stdlib.h>

using namespace std;

int **PMatrix,fil=10,col=20;

int main(){
	int a=0;
	
	PMatrix=new int*[fil];
	
	for(int i=0;i<fil;i++)
	   PMatrix[i]= new int[col];
	
	PMatrix[0][0]=100;
	cout<<"\n Direcciones de memoria\n"<<&PMatrix[0][0]<<"\n"<<&PMatrix[2][1]<<"\n"<<&PMatrix[5][1]<<"\n"<<&PMatrix[1][10]<<"\n"<<&PMatrix[2][10]<<"\n"<<&PMatrix[5][3]<<"\n"<<&PMatrix[9][19];

//1. Si es valida, la desreferencia	
	PMatrix[0][0]=*(*PMatrix);
//Prueba
	cout<<"\n"<<PMatrix[0][0]<<"\n";

//2. Se hara con un for anidado
  /* No es valida la opcion
      for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 ((PMatrix))+(i+ *col +j)=a;
       	 a++;
	   }
	   a=0;
	}
 */  
 //3. Si es valida la opcion y es la mejor 
 /*
    for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 ((PMatrix+i)+j)=a;
       	 a++;
	   }
	   a=0;
	}
		for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
		 cout<<"["<<((PMatrix+i)+j)<<"]";	
		}
		cout<<"\n";	
	}
*/

/*4. Si es valida la opcion
    for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 *(PMatrix[i]+j)=a;
       	 a++;
	   }
	   a=0;
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
		 cout<<"["<<*(PMatrix[i]+j)<<"]";	
		}
		cout<<"\n";	
	}
*/

/*5. Si es valida la opcion
    for(int i=0;i<10;i++){
       for(int j=0;j<20;j++){
       	 (*(PMatrix+i))[j]=a;
       	 a++;
	   }
	   a=0;
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<20;j++){
		 cout<<"["<<(*(PMatrix+i))[j]<<"]";	
		}
		cout<<"\n";
    }
*/
	
	return 0;
}
