#include <iostream>
using namespace std;
void leer(float *,float *);
void ver(float *,float *);
void sumar(float *,float *);
main(){
    float *c1,*c2;
    c1=new float;
    c2=new float;
    leer(c1,c2);
    ver(c1,c2);
    sumar(c1,c2);
}
void leer(float *c1,float *c2){
  cout<<"Complejo 1"<<endl;
    cout<<"Valor Real: ";cin>>c1[0];
    cout<<"Valor Imaginario: ";cin>>c1[1];

    cout<<"Complejo 2 "<<endl;
    cout<<"Valor Real: ";cin>>c2[0];
    cout<<"Valor imaginario: ";cin>>c2[1];
}
void ver(float *c1,float *c2){

cout<<"Valores del complejo 1: "<<c1[0]<<"+"<<c1[1]<<"i"<<endl;
cout<<"Valores del complejo 2: "<<c2[0]<<"+"<<c2[1]<<"i"<<endl;

}
void sumar(float *c1,float *c2){
    cout<<"La suma de tus valores: "<<c1[0] + c2[0]<<" + "<<c1[1] + c2[1]<<"i"<<endl;

}
