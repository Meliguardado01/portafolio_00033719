nclude <iostream>
#include <stack>
using namespace std;

// Stack implementation in C++ using std::stack
int main()
{
	stack<int> s;

	s.push(10);	
	s.push(9);	
	s.push(5);	
	s.push(7);	

	
	cout << "Tamaño " << s.size() << endl;
	
	cout<<"Sacando los primeros 2: "<<endl;

	s.pop();	
	s.pop();	

	cout << "Tamaño actualizado: " << s.size() << endl;
	
	s.push(7);
	s.push(5);
	
	cout<<"Pila llena: "<<s.size()<<endl;

	
	if (s.empty())
		cout << "La pila esta vacia\n";
	else
		cout << "La pila no esta vacia\n";
		
		cout << "Segundo elemento es: " << s.top() << endl;

	return 0;
}
