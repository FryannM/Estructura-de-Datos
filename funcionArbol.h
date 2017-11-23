#include<iostream>


using namespace std;


  struct  Nodo{
  	int dato ;
  	Nodo *der;
  	Nodo *izq;
  };
 // Prototipos de funciones
 Nodo *arbol = NULL;
 Nodo *crearNodo(int);
 void insertarNodo(Nodo *&, int );
 void menu();
 void mostrarArbol(Nodo*,int);
 bool busqueda(Nodo *,int );




Nodo *crearNodo(int n){
 	
 	
 	Nodo *nuevo_nodo = new Nodo();
 	
 	 nuevo_nodo ->dato =n;
 	 nuevo_nodo ->  der= NULL;
 	 nuevo_nodo ->izq  = NULL;
 	 
 	 
 	 return nuevo_nodo;
	
 }
 //Insetar Nodo en el arbol
 void insertarNodo(Nodo *&arbol , int n ){
 	
 	 if (arbol ==NULL)
 	 {
 	 	
 	 Nodo *nuevo_nodo = crearNodo(n);
 	 arbol = nuevo_nodo;
	  }
	  else{// si el arbol tiene un nodo o mas de un nodo
	  	 int valorRaiz = arbol->dato; // Obtenemos el valor de la raiz
	  	 
	  	  if ( n <valorRaiz)// si el elemento es menor a la raiz insertamos en izq
	  	  {
	  	  	insertarNodo(arbol->izq,n);
	  	  	
			}
			else{ //si el elemento es mayor insertamos en el lado derecho
				insertarNodo(arbol->der,n);
			}	  	 
	  }
 }
 
 void mostrarArbol(Nodo *arbol,int cont){
 	
 	
 	 if (arbol ==NULL){// si el arbol esta vacio retorna
 	 	return;
 	 	
 	 	
	  }
	  else {
	  	mostrarArbol(arbol->der,cont+1);
	  	 for(int i = 0; i<cont; i++)
	  	 {
	  	 	cout<<"   ";
		   }
		   cout<<arbol->dato<<endl;
		   mostrarArbol(arbol->izq,cont +1);
	  }
 	 
 }
 
  bool busqueda(Nodo *arbol ,int n ){
  	 if (arbol ==NULL){
  	 		 return false;
	   }
	   else if (arbol->dato == n){//  si el nodo es igual al elemento retorna true
	   	 	return true;
			}
	   
	   else if (n<arbol->dato){// si el elemento es menor 
	   	return busqueda(arbol->izq,n);
			}
	   	 else {
	   	 	return busqueda(arbol->der,n);
			}

  }
