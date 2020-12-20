#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
void leer (int &);
void ver (int);
int factorial(int );
float serie(int );
main(){
int j;
leer(j);
ver(j);
cout<<"\nk es igual a "<<serie(j)<<endl;
system("pause");
}
void leer(int &_j){
cout<<"Valor de j = ";cin>>_j;}
void ver(int _j){
cout<<"Valor de j: "<<_j<<endl;
}
float serie(int _j){
float suma=0;
for (int n=1;n<=_j;n++){
    suma+=(float)n/(n+factorial(n));
    cout<<n<<"  "<<factorial(n)<<"  "<<suma<<endl;}
}
int factorial(int num){
int fact=1;
for(int i=1;i<=num ;i++){
    fact = fact*i;
}
}
