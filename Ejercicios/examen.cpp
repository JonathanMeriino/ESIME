#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
using namespace std;
void menu(int  );
void serie(int );
void pares(int ,int );
void polinomios(float [],float []);
void leer_p(float [], float []);
void ver_p(float [],float []);
void sumar_p(float [], float []);
void opcion(int);
main(){
    float P1[3],P2[3],P;
int op;
do{
    menu(op);

}while(op!=0);

}
void menu(int op){
    float P1[3],P2[3];
int x,a,y;
cout<<"\t\t\t *****Menu Principal***** \n"<<endl;
cout<<"\t\t 1. Serie "<<endl;
cout<<"\t\t 2. Pares"<<endl;
cout<<"\t\t 3. Polinomios "<<endl;
cout<<"\t\t 0. Salir "<<endl;
cout<<"Selecciona una opcion: ";
cin>>op;
switch(op){

case 1:

    system("cls");
cout<<"\t\t\tEjercicio A"<<endl;

serie(a);
break;
case 2:
    system("cls");
        cout<<"\t\t\tEjercicio B"<<endl;

pares(x,y);
cout<<endl;
break;
case 3:
    system("cls");
    cout<<"\t\t\tEjercicio c"<<endl;
polinomios(P1,P2);
cout<<endl;
break;
case 0:
cout<<" Saliendo ... \n";Sleep(1000);break;
break;
default: cout<<"Tu opcion no existe"<<endl;
}
}

void serie(int a){
int x,k;
cout<<"\tDame el valor de  k: ";cin>>k;
cout<<"\tDame el valor de x: ";cin>>x;
for(int n=1; n<=k; n++){
a = (pow(-1,n) * pow(x,2*n+1)) / (2*n+1);
cout<<"\tEl valor es: "<<a<<endl;

}
system("pause"); system("cls");

}
void pares(int x,int y){
int val;
x=0;  y=0;
cout<<"\t\tEstos son los valores pares"<<endl;
do{
    x++; y++;
    val = 2*(pow(x,2)) + 4*(pow(y,3));
    if(val<1024 && x%2==0 && y%2==0){

        cout<<"\t2("<<x<<")^2 + 4("<<y<<")^3= "<<val<<endl;
  }  }while(val<1204);

system("pause");system("cls");

}
void polinomios(float P1[],float P2[]){
int op;
do{
cout<<"\t\tMenu Polinomios\n"<<endl;
cout<<"\t\t1. Leer "<<endl;
cout<<"\t\t2. Ver"<<endl;
cout<<"\t\t3. Sumar "<<endl;
cout<<"\t\t0. Salir "<<endl;
cout<<"\tSelecciona una opcion: ";
cin>>op;
switch(op){

case 1:leer_p(P1,P2); break;
case 2: ver_p(P1,P2); break;
case 3: sumar_p(P1,P2); break;
case 0:
cout<<" Saliendo ... \n";Sleep(1000);break;
break;
}
}while(op!=0);
}
void leer_p(float _P1[], float _P2[]){
    char variable;
    cout<<"Escribe el valor del primer polinomio\n";
for (int exp=2; exp>=0; exp--){
if(exp>0){variable='X';}else{variable='C';}
    cout<<"\n\t"<<variable<<"^"<<exp<<"=";
    cin>>_P1[exp];}
    cout<<"\nEscribe el valor del segundo polinomio\n";
for (int exp=2; exp>=0; exp--){
if(exp>0){variable='X';}else{variable='C';}
    cout<<"\n\t"<<variable<<"^"<<exp<<"=";
    cin>>_P2[exp];}
system("pause"); system("cls");
}

void ver_p(float _P1[], float _P2[]){
    char signo, variable;
    cout<<"\tLos Polinomios que escribiste son:\n";
    cout<<"\n1. ";
    for(int exp=2; exp>=0; exp--){
    if(exp>0){signo='+';}else{signo=' ';}
    if(exp==0){variable='^';}else{variable='X';}
        cout<<"("<<_P1[exp]<<variable<<"^"<<exp<<")"<<signo;}
        cout<<"\n2.  ";
    for(int exp=2; exp>=0.; exp--){
    if(exp>0){signo='+';}else{signo=' ';}
    if(exp==0){variable='^';}else{variable='X';}
        cout<<"("<<_P2[exp]<<variable<<"^"<<exp<<")"<<signo;}
        cout<<"\n\n\n";
        system("pause"); system("cls");
    }
void sumar_p(float _P1[], float _P2[]){
    cout<<"La suma de los Polinomios es :\n";
    cout<<"\n\t("<<_P1[2]+_P2[2]<<"X^2)+("<<_P1[1]+_P2[1]<<"X)+("<<_P1[0]+_P2[0]<<")\n\n\n";
    system("pause"); system("cls");
}



