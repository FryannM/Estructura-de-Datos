#include<iostream>
#include<string>
#include"funcionArbol.h"
#include"binaria.h"
#include"Lineal.h"
#include"SearchFibonacci.h"
#include"interpolationSearch.h"
#include"mypersonal.h"


using namespace std;


void menu()
{
	 int dato, opcion,contador =0;
	 int n;
	 
	  do {
	  	 
	  	 		mypersonal(); 
			   cout<<"\n\n\n\n"<<endl;
	  	 
	     cout<<"\t.:MENU:."<<endl;
	  	 cout<<"1.Insertar un nuevo nodo"<<endl;
	  	 cout<<"2.Mostrar arbol completo"<<endl;
	  	 cout<<"3.Busqueda Binaria"<<endl;
	  	 cout<<"4.Busqueda Lineal"<<endl;
	  	 cout<<"5.Busqueda  fibonacci"<<endl;
	  	 cout<<"6.Busqueda Interpolation"<<endl;
//	  	 cout<<"7.Recorrer el arbol en Pos-Orden"<<endl;
	  	 cout<<"7.Salir"<<endl;
	  	 cout<<"Opcion: ";
	  	 cin>>opcion;
	  	 
	  
	  	
	  	
	  	 
	  	 
	  	 switch (opcion){
		    case 1: cout<<"Digite un numero: ";
		   			 cin>> dato;
		   			 
		    	insertarNodo(arbol,dato);
		    
		    	cout<<"\n";
		    	system("pause");
				break;
		    	
		    	
		 case  2 :cout<<"\nMostrando arbol Completo : \n\n";
			mostrarArbol(arbol,contador);
			cout<<"\n";
			system("pause");
		    	
			break;
		    case  3 :cout<<"Busqueda Binaria:\n\n "<<endl;
		     cout<<"{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40}"<<endl;
		    insertarDato(n);
		    	cout<<"\n";
		    	system("pause");
				break;
		   
		    
			 case  4 :cout<<"\nBusqueda lineal : \n\n";
			  tamArray();
			 lista();
			
			cout<<"\n";
			system("pause");
			break;
			
			 
			 case  5 :cout<<"\nBusqueda Fibonacci : \n\n";
			 cout<<" 5,15,19,20,25,31,38,41,45,49,52,55,57,89"<<endl;
			 cout<<"\n";
			 Read();
			 cout<<"\n";
			 system("pause");
			 break;
			
		 
		    case  6 : cout<<"\n\nBusqueda Interpolation: \n\n";
		    interpolarSearchshow();
		    cout<<"\n";
		    system("pause");
			break;
		   
		    
		     case  7 :break;
		   
		   }
		   system("cls");
	  }while(opcion !=7);
}






