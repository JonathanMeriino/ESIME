#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
//Prototipos
int menu(void);
void leer(float &,float &,float &);
void tabular_a(float,float,float);
void tabular_b(float,float,float);
void tabular_c(float,float,float);
void opcion(int);
float ini,fin,inc;
int mayor=0,menor=0;
main(){
    int op;
    while(op>0){
    op=menu();
    opcion(op);
    system("pause");
    system("cls");}}
int menu(void){
    int op;
    cout<<"\n\n\t\t\t\tMenu"<<endl<<endl;
    cout<<" 1.- Leer"<<endl;
    cout<<" 2.- f(x)= sen x + cos x"<<endl;
    cout<<" 3.- f(x)= 2 sen x + 3 cos x + e^x"<<endl;
    cout<<" 4.- f(x)= 2.2 sen x - 3 cos x - e^x + ln x"<<endl<<endl;
    cout<<" Selecciona una opcion: ";
    cin>>op;
    return op;}
void leer(float &ini, float &fin, float &inc){
    cout<<" Ingresa el limite inferior: "; cin>>ini;
    cout<<" Ingresa el limite superior: "; cin>>fin;
    cout<<" Ingresa el incremento: "; cin>> inc;}
void tabular_a(float ini, float fin, float inc){
    float fx,mayor=0,menor=0;
    cout<<"sen(x)   +   cos(x)  =   f(x)"<<endl<<endl;
    for(float x=ini; x<=fin; x=x+inc){
        fx=sin(x)+cos(x);
        cout<<sin(x)<<"     "<<cos(x)<<"        "<<fx<<endl;
        if(fx>mayor){mayor=fx;}
        if(fx<menor){menor=fx;}}
        cout<<endl<<endl;
        cout<<"El valor maximo de f(x) es: "<<mayor<<endl;
        cout<<"El valor minimo de f(x) es: "<<menor<<endl;}
void tabular_b(float ini, float fin, float inc){
    float fx,mayor = 0,menor = 0;
    cout<<" 2sen(x)    +   3cos(x)    +   e^x   =   f(x)"<<endl<<endl;
    for(float x=ini; x<=fin; x=x+inc){
        fx= (2*sin(x))+(3*cos(x))+ exp(x);
        cout<<2*sin(x)<<"    "<<3*cos(x)<<"    "<<exp(x)<<"     "<<fx<<endl;
        if(fx>mayor){mayor=fx;}
        if(fx<menor){menor=fx;}}
        cout<<endl<<endl;
        cout<<"El valor maximo de f(x) es: "<<mayor<<endl;
        cout<<"El valor minimo de f(x) es: "<<menor<<endl;}
void tabular_c(float ini, float fin, float inc){
    float fx,mayor = 0,menor = 0;
    cout<<" 2.2sen(x)    -   3cos(x)    -   e^x   +   ln(x) =   f(x)"<<endl<<endl;
    for(float x=ini; x<=fin; x=x+inc){
        fx= (2.2*sin(x))-(3*cos(x))-exp(x)+log(x);
        cout<<2.2*sin(x)<<"    "<<3*cos(x)<<"    "<<exp(x)<<"     "<<log(x)<<"      "<<fx<<endl;
        if(fx>mayor){mayor=fx;}
        if(fx<menor){menor=fx;}}
        cout<<endl<<endl;
        cout<<"El valor maximo de f(x) es: "<<mayor<<endl;
        cout<<"El valor minimo de f(x) es: "<<menor<<endl;}
void opcion(int op){
    switch(op){
        case 1: leer(ini,fin,inc);break;
        case 2: cout<<system("cls");tabular_a(ini,fin,inc);break;
        case 3: cout<<system("cls");tabular_b(ini,fin,inc);break;
        case 4: cout<<system("cls");tabular_c(ini,fin,inc);break;
        case 0: cout<<"  Fin del programa "<<endl;break;
        default :cout<<"  La opcion no existe "<<endl;
    }
}
