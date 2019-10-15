 #include <iostream> 
 using namespace std; 
 struct node{string nombre;
  int edad;
  node *next;}; 
  class datosPersona{private:node *list;public: datosPersona(){list = NULL;}
   void llenarLista(string, int); 
   void mostrarLista(); 
   void eliminarLista(string);
    void actualizarLista(string);};
	
	 int main(){
	 
	 datosPersona lista;
	 string nombre; 
	 int edad; 
	 int opt; 
	 char siNo; 
	 do{ 
	 
	 //Menu
	 
	 cout<<"==============Menu=============="<<endl;
	 
	 cout<<"1. Llenar Lista" <<endl;
	 cout<<"2. Mostrar Lista" <<endl;
	 cout<<"3. Eliminar de Lista" <<endl;
	 cout<<"4. Actualizar datos" <<endl;
	 cout<<"5. Salir" <<endl;
	 cout<<"\nSeleccione una opcion: " <<endl;
	 cin>>opt; 
	 
	 switch(opt){ 
	 
	 case 1: 
	 do{cout<<"\nNombre: ";
	 cin>>nombre;cout<<"Edad: ";
	 cin>>edad;lista.llenarLista(nombre, edad);
	 cout<<"Desea agregar otra persona(s/n)? "<<endl;
	 cin>>siNo;}
	 
	 while(siNo == 's'); 
	 break;
	  
	 case 2:
	 
	 lista.mostrarLista(); 
	 break; 
	 
	 case 3:
	 cout<<"Nombre de persona a eliminar de la lista: ";
	 cin>>nombre;lista.eliminarLista(nombre); 
	 break; 
	 
	 case 4:
	 cout<<"Nombre de persona a actualizar: ";
	 cin>>nombre;
	 lista.actualizarLista(nombre); 
	 break;}
	 
	  }while(opt != 5); 
	  
	  return 0;}
	  
	//LLENAR LISTA
	
	void datosPersona::llenarLista(string nombre, int edad){
	
	node *New_node = new node;
	New_node->nombre = nombre;
	New_node->edad = edad; 
	New_node->next = list;list = New_node;
	}
	
	//MOSTRAR LISTA
	
	void datosPersona::mostrarLista(){
	
	node *actual = new node;
	actual = list; 
	
	while(actual != NULL){
	
	cout<<endl<<"Nombre: "<<actual->nombre<<endl;
	cout<<"Edad: "<<actual->edad<<endl;actual = actual->next;}
	}
	
	//ELLIMINAR LISTA
	
	void datosPersona::eliminarLista(string nombre){
	
	node *aux_delete = list;
	node *previous = NULL; 
	
	while((aux_delete != NULL) && (aux_delete->nombre != nombre)){
	previous = aux_delete;
	aux_delete = aux_delete->next;}
	
	 if(aux_delete == NULL){
	 cout<<"No se ha encontrado en la lista!"<<endl;}
	 
	  else if(previous == NULL){
	  list = list->next; 
	  delete aux_delete;} 
	  
	  else{previous->next = aux_delete->next; 
	  delete aux_delete;}
	  }
	  
	  //ACTUALIZAR LISTA
	  
	  void datosPersona::actualizarLista(string nombre){
	  
	  string nuevoNombre; 
	  int edad;
	  node *actual = new node;
	  actual = list; 
	  
	  while(actual->nombre != nombre){
	  actual = actual->next;
	  }
}	  
