
#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
using namespace std;
void leer_n(int &);
void leer(float *,int n);
void ver(float *,int n);
void sumar(float [],float [],float [], int n);
void restar(float [],float [],float [],int n);
main(){
int grado;
float *p1,*p2;
p1 = new float[grado];
p2 = new float[grado];
leer_n(grado);
cout<<"Polinomio 1"<<endl;
leer(p1,grado);
ver(p1,grado);
cout<<"Polinomio 2"<<endl;
leer(p2,grado);
ver(p2,grado);
/*
sumar(p1,p2,p3,n);
restar(p1,p2,p3,n);*/
}
void leer_n (int &grado) {

cout<<"Ingrese el grado de su polinomio: ";
cin>>grado;

}
void leer (float p[],int n) {

    for(int i=n;i>=0;i--){

    cout <<"x^ " <<i<<" = ";
    cin>>p[i];
}

}

void ver (float p[],int n){

for (int i=n;i>=0;i--){
    if(i<=n&&i!=1&&i!=0){

        cout<<p[i]<<"x^"<<i<<" + ";
    }

if(i==1) {
    cout<<p[i]<<" x 
	"<<" + ";

}
if(i<=0){
            cout<<p[i]<<endl;

}
}}/*
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
void tabular(float p1[],float p2[],float p3[]){
int ma,mi;
float inc;
cout<<"La tabulacion del polinomio"<<endl;
cout<<"Valor maximo: ";cin>>ma;
cout<<"Valor minimo; ";cin>>mi;
cout<<"Incremento: ";cin>>inc;

for(int i=0;i<=ma && i>=mi; inc){

        cout<<p3[i]*5<<endl;
}
 }*/
