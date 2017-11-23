#include<iostream>
#include<conio.h>
#include <stdio.h>
#include <time.h>
#include <sys/time.h>


using namespace std;
void lista();
void tamArray();
double timeval_diff(struct timeval *a, struct timeval *b)
{
  return
    (double)(a->tv_sec + (double)a->tv_usec/1000000) -
    (double)(b->tv_sec + (double)b->tv_usec/1000000);
}




void lista(){
	int a[] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
	int i,dato;
	char band = 'F';
		 struct timeval t_ini, t_fin;
  double secs;

  gettimeofday(&t_ini, NULL);
	//dato = 4; 
	
	
	 cout<<"\nDigite el numero que  a encontrar en el arreglo: ";
	 cin>>dato;
	i=0;
	while((band == 'F') && (i<40)){
		if(a[i] == dato){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"\nEl numero "<<dato<<" a buscar no existe en el arreglo"<<endl;
	}
	else if(band == 'V'){
		cout<<"\nEl numero "<<dato<<" a sido encontrado en la pos: "<<i-1<<endl;
	}
	
 gettimeofday(&t_fin, NULL);

  secs = timeval_diff(&t_fin, &t_ini);
  printf("\nTiempo: %.16g milliseconds\n", secs * 1000.0);
}

void tamArray(){
	
cout<<"\n{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40}\n";
	
}
