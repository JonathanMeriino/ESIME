#include<iostream>
using namespace std;
void inicializar(float *&);
void leer(float *);
void ver(float *);
void sumar(float *, float *);

main(){
    float *c1, *c2;
    cout<<"   complejo 1 \n\n";
    inicializar(c1);
    leer(c1);
    cout<<"   complejo 2 \n\n";
    inicializar(c2);
    leer(c2);
    cout<<"   suma c1 + c2 \n\n";
    ver(c1);
    ver(c2);
    cout<<"------------ \n";
    sumar(c1,c2);
}
void inicializar(float *&c){
    c=new float;
}
void leer(float *c){
    cout<<"       real : ";cin>>c[0];
    cout<<" imaginario : ";cin>>c[1]; }
void ver(float *c){
    cout<<c[0]<<" + "<<c[1]<<" i = "<<endl; }

void sumar(float *c1, float *c2){
    cout<<c1[0]+c2[0]<<" + "<<c1[1]+c2[1]<<" i = "<<endl;}

