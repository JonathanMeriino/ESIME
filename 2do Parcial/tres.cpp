#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
void leer(int &);
float tabular(int );
main(){

int n;
leer(n);
cout<<"La salida es: "<<tabular(n)<<endl;
system ("pause");
}
void leer(int &_n){
cout<<"Valor de n: ";
cin>>_n;
}
float tabular (int _n){
float fx=0;
for (int x=1;x<=_n;x++){
    fx+=pow(x,_n);
    cout<<"f("<<x<<")= "<<fx<<endl;
}
return fx;
}
