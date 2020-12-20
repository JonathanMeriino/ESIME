//Benitez Merino Leonardo Jonathan - 1CV1
#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
void leer (int &);
void leer_au(float *,int);
int ver(float *, int );
int orden(float *,int);
main(){
 int j,n,ord;
 float *N;
 N=new float[n];
 cout<<"\t\tPractica 3: Numeros aleatorios y ordenados"<<endl;
 leer (n);
 leer_au(N,n);
 ver (N,n);
 orden(N,n);
}
void leer (int &n){
cout<<"Cuantos numeros desea leer: ";
cin>>n;

}
void leer_au(float *N,int n){
    
	for(int i=0;i<n;i++){
        cout<<"\nDame un numero: ";
        cin>>N[i]; }
}
int ver (float *N,int n){
    cout<<"\n\t Impresion de los numeros capturados"<<endl;
    for(int i=0;i<n;i++){

    cout<<"Posicion "<<i<<" = "<<N[i]<<endl;
    }
    system("pause");
}
int orden(float *N,int n){
    int ord;
    cout<<"\n\tNumeros ordenados de menor a mayor"<<endl;
    for (int i=0; i<n;i++)
        {
        for (int j=0;j<n ;j++)
        {
            if(N[j]>N[j+1])
            {
              ord=N[j];
              N[j]=N[j+1];
              N[j+1]=ord;
            }
        }
    }
for (int i=0;i<n;i++)
{
     cout<<"Posicion "<<i<<" = "<<N[i]<<endl;
}
}


