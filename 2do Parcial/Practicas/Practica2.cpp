//Benitez Merino Leonardo Jonathan - 1CV1
#include <iostream>
#include <stdlib.h>
using namespace std;
void leer (int []);
int ver(int []);
int par(int []);
int impar(int []);
main(){
 int N[100],i,n;
 cout<<"\t\tPractica 2: Numeros aleatorios"<<endl;
 leer (N);
 par (N);
 impar (N);

}
void leer (int N[]){
    int n;
cout<<"Cuantos numeros desea leer: ";
cin>>n;
for(int i=0;i<n;i++){
    cout<<"\nDame un numero: ";
    cin>>N[i]; }
}
int par (int N[]){
    int n;
    cout<<"\n\t Estos son los numeros pares"<<endl;
    for(int i=0;i<n;i++){
        if(N[i]%2==0 && N[i]!=0){
    cout<<"Posicion "<<i<<" = "<<N[i]<<" es par"<<endl; }


    }
    }
int impar(int N[]){
    int n;
    cout<<"\n\t Estos son los numeros pares"<<endl;
    for(int i=0;i<n;i++){
            if(N[i]%2==1){
cout<<"Posicion "<<i<<" = "<<N[i]<<" es impar"<<endl;}
}
}








