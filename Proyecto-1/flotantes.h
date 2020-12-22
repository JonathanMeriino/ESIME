#include<iostream>
#include<stdlib.h>
#include<windows.h>

using namespace std;

void leer(float &_f){
    cout<<" Dato flotante : ";cin>>_f;
}
void ver(float _f){
    cout<<" valor : "<<_f<<endl;
}
void sumar(float _f1,float _f2){
    cout<<_f1<<" + "<<_f2<<" = "<<_f1+_f2<<endl;
}
void restar(float _f1,float _f2){
    cout<<_f1<<" - "<<_f2<<" = "<<_f1-_f2<<endl;
}

