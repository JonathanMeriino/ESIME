#include<iostream>
#include<stdlib.h>
using namespace std;
void leer(int &_a,int &_b);
void ver(int _a,int _b);
bool validar(int _b);
void dividir (float _a,float _b);
int main(){
    int a,b;
    cout<<"Este programa hace algo"<<endl;
    cout<<" C=a/b \n\n";
    leer(a,b);
    ver(a,b);
    if (validar(b))     dividir(a,b);
    else                cout<<"No se puede realizar";
}
void leer(int &_a,int &_b){
cout<<"Valor de a"<<endl;
cin>>_a;
cout<<"Valor de b"<<endl;
cin>>_b;

}
void ver(int _a,int _b){
cout<<"Valor de a: "<<_a<<endl;
cout<<"Valor de b: "<<_b<<endl;
system("pause");
}
bool validar(int _b){
if(_b!=0) return true;
else      return false;
}
void dividir (float _a,float _b){
cout<<"La division de "<<_a<<"/"<<_b<< "="<<_a/_b<<endl;
}






