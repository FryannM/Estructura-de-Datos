#include <iostream>
#include <time.h>
#include <sys/time.h>

using namespace std;

void interpolarSearchshow();
//Busqueda Interpolation

double timeval_diff_interpolationSerch(struct timeval *a, struct timeval *b);

double timeval_diff_interpolationSerch(struct timeval *a, struct timeval *b)
{
  return
    (double)(a->tv_sec + (double)a->tv_usec/1000000) -
    (double)(b->tv_sec + (double)b->tv_usec/1000000);
}
int interpolationSearch ( int A[] , int n, int e)
{
int inicio, fin , pos;
inicio= 0;
fin = n-1;



while( inicio<=fin && e>=A[inicio] && e<=A[fin])
{
//e = Elemento
//
 pos = inicio + (((double)(fin-inicio)/(A[fin]-A[inicio]))*(e-A[inicio]));

 if (A[pos] == e)
  return pos;
 if (e > A[pos])
  inicio = pos + 1;
 else
  fin = pos-1;
 }
return -1;

}
 void interpolarSearchshow(){
 	 struct timeval t_ini, t_fin;
 	 double secs;
     gettimeofday(&t_ini, NULL);
	int n,i,e;
 cout<<"\nDigite el numero de elementos : ";
 cin>>n;
 int A[n];
 cout<<"Digite elemento \n";
 for(i=0;i<n;i++)
  cin>>A[i];
 cout<<"Digite el elemento a buscar: \n";
 cin>>e;

 //interpolation search function call
 int index = interpolationSearch(A, n, e);
 if(index != -1)
 cout<<"Numero: "<<e<<" encontrado en la posicion :"<<index;
 else
 cout<<"Numero "<<e<<" no encontrado en el Array.";
 
 
 	gettimeofday(&t_fin, NULL);
	secs = timeval_diff_interpolationSerch(&t_fin, &t_ini);
    printf("\nTiempo: %.16g milisegundos\n", secs * 1000.0);
}
