#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>
#include<sys/time.h>
#include <time.h>
#define MAXSIZE 20
void Read();
double timeval_diff(struct timeval *a, struct timeval *b);
void fibonacci(int *f)    //Construction of the Fibonacci sequence
{
    f[0] = 1;
    f[1] = 1;
    for(int i = 2; i <MAXSIZE; ++i)
        f[i] = f[i - 2] + f[i - 1];
}



int fibonacci_search(int *a,int key,int n)
{
    int low = 0,high = n - 1;
    int mid = 0;
    int k = 0;
    int F[MAXSIZE];
    fibonacci(F);
    while(n > F[k] - 1) //Calculando la posicion fibonacci
        ++k;
    for(int i = n; i <F[k] - 1; ++i) 
        a[i] = a[high];
    while(low <= high){
        mid = low + F[k-1] - 1; 
        if(a[mid] > key){
            high = mid - 1;
            k = k - 1;
        }
        else if(a[mid] <key){
            low = mid + 1;
            k = k - 2;
        }
        else{
            if(mid <= high) 
                return mid;
            else
                return -1;
        }
    }
    return -1;
}

void Read(){
	 
 struct timeval t_ini, t_fin;
  double secs;

  gettimeofday(&t_ini, NULL);
	 
    int a[MAXSIZE] = {5,15,19,20,25,31,38,41,45,49,52,55,57,89};
    int k;
    printf("Digite el numero que desea buscar \n");
    scanf("%d",&k);
    int pos = fibonacci_search(a,k,14);
    if(pos != -1)
        printf("Posicion %d la Numero :%d\n",pos + 1,k);
    else
        printf("Elemento %d no encontrado en el Array \n",k);
        
    gettimeofday(&t_fin, NULL);

  secs = timeval_diff(&t_fin, &t_ini);
  printf("%.16g milisegundos\n", secs * 1000.0);
}
    


