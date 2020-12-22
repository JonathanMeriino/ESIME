#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
using namespace std;

void leer_n (int &n)
{
cout<<"Ingrese el grado de su polinomio: ";
cin>>n;

}

void leer (float p[],int n)
{

cout<<" Da los valores de tu Polinomio"<<endl;
    for(int i=n;i>=0;i--){

    cout <<"x^"<<i<<"=";
    cin>>p[i];
}

}

void ver (float p[],int n){



for (int i=n;i>=0;i--){


    if(i<=n&&i!=1&&i!=0){

        cout<<p[i]<<"x^"<<i<<"+";
    }



 if(i==1) {
    cout<<p[i]<<"x"<<"+";

}
if(i<=0){

    cout<<p[i]<<endl;

}
}

}


void sumar(float p1[],float p2[],float p3[],int n){

cout<<"La Suma de estos polinomios es\n";
for(int i=n;i>=0;i--){

p3[i]=p1[i]+p2[i];
 if(i>=2){

cout<<"("<<p3[i]<<")x^"<<i<<"+";
    }
if(i==1) {
    cout<<"("<<p3[i]<<")x"<<"+";
}
if(i<=0){
    cout<<p3[i]<<endl;

}}}
void restar(float p1[],float p2[],float p3[],int n){
cout<<"La resta de tus polinimos es: ";
for(int i=n;i>=0;i--){

p3[i]=p1[i]-p2[i];
 if(i>=2){

cout<<"("<<p3[i]<<")x^"<<i<<"+";
    }
if(i==1) {
    cout<<"("<<p3[i]<<")x"<<"+";
}
if(i<=0){
    cout<<p3[i]<<endl;

}

}}
/*
int x;
float p=0;
cout<<"ingrese el valor de x";
cin>>x;
for(int i=n;i>=0;i--){
 p+=p3[i]*pow(x,i);
}
 cout<<p;

 cout<<"la tabulacion del polinomio:";
 for(int i=n;i>=0;i--){

p3[i]=p1[i]+p2[i];
 if(i>=2){

cout<<p3[i]<<"x^"<<i<<"+";
    }
if(i==1) {
    cout<<p3[i]<<"x"<<"+";
}
if(i<=0){
    cout<<p3[i]<<endl;
    cout<<"es:";
}
 }
 return (p);
}*/

