#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <stdio.h>
#include <time.h>
#include <sys/time.h>


using namespace std;

void insertarDato(int );



double Ttimeval_diff(struct timeval *a, struct timeval *b)
{
  return
    (double)(a->tv_sec + (double)a->tv_usec/1000000) -
    (double)(b->tv_sec + (double)b->tv_usec/1000000);
}

void insertarDato(int n){
	
	
	 struct timeval t_ini, t_fin;
 	 double secs;
     gettimeofday(&t_ini, NULL);
		
	int numeros[] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
	int inf,sup,mitad,dato;
	char band= 'F';
	//Algoritmo de busqueda;
	
	 inf = 0;
	 sup =40;
	 	 
	 cout<<"Digite el numero a buscar en el array:"<<endl;
	 cin>> dato;
	  while(inf <=sup){
	  	mitad = (inf+sup)/2;
	  	
	  	if(numeros[mitad] == dato){
	  		band ='V';
	  		break;
		  }
		  else{
		  	band ='F';
		  }	  
		  if (numeros[mitad]>dato){
		  	sup =mitad;
		  	mitad =(inf+sup)/2;
		  }
		   if(numeros[mitad]<dato){
		   	inf=mitad;
		   	
		   	mitad =(inf+sup)/2;
		   } 
		   
	  }
	  
		if(band == 'F'){
		cout<<"El numero "<<dato<<" buscar no existe en el arreglo"<<endl;
	}
	else if(band == 'V'){
		cout<<"El numero  "<<dato<<"  a sido encontrado en la pos: "<<mitad<<endl;
	}
	
	gettimeofday(&t_fin, NULL);
	secs = Ttimeval_diff(&t_fin, &t_ini);
    printf("%.16g milliseconds\n", secs * 1000.0);

}
	  

		

	  

 
