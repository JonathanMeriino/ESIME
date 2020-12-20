#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

 void leer(int &,int &,int &);
 void ver(int ,int ,int );
 float operacion(int,int,int);

main(){
 int a,b;
 int c;
 leer(a,b,c);
 ver (a,b,c);
 operacion (a,b,c);
}


void leer (int &a,int &b,int &c){
cout<<"ingresa los valores de tu ecuacion"<<endl;
cout <<"a^2:"<<endl;
cin >>a;
cout<<"bx:"<<endl;
cin>>b;
cout<<"c:"<<endl;
cin>>c;
}

void ver(int a,int b,int c){

cout<<"su polinomio es";

cout<<a<<"x^2+"<<b<<"x+"<<c<<endl;
}


float operacion(int a,int b,int c){
float x1;
float x2;
if(a==0){
        cout<<"esta operacion no es realizable";
}
else{
        if (sqrt(pow(b,2)-4*a*c)<0){cout<<"es un numero imaginario";}


x1=(-1*b+sqrt(pow(b,2)-4*a*c))/2*a;
cout <<x1<<endl;
x2=(-1*b-sqrt(pow(b,2)-4*a*c))/2*a;
cout<<x2<<endl;

}
}
