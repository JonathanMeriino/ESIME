#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;
int menu(void);
void leer(float []);
void ver(float []);
void sumar(float [], float []);
void restar(float [], float []);
void multiplicar(float [], float[]);
void opcion(int);

main(){
    int op;
    float n1[2],n2[2];
    char signo='+';
    do{
    op=menu();
    opcion(op);
    system("pause");
    system("cls");
    }while(op!=0);
    system("pause");
}

int menu(void){
    int op;
    cout<<"\t\t Menu "<<endl;
    cout<<" \t 1. Leer "<<endl;
    cout<<" \t 2. Ver "<<endl;
    cout<<" \t 3. Sumar "<<endl;
    cout<<" \t 4. Restar "<<endl;
    cout<<" \t 5. Multiplicar "<<endl;
    cout<<" \t 0. Salir "<<endl;
    cout<<"Elige una opcion: ";
    cin>>op;
    return op;
    }
void leer(float n[]){
    cout<<"Dame el valor real: ";
    cin>>n[0];
    cout<<"Dame el valor imaginario: ";
    cin>>n[1];
    }
void ver(float n[]){
    cout<<" El complejo es: ";
    char signo;
    if(n[1]>=0){
            signo='+';}
    else{
            signo=' ';}
    cout<<n[0]<<signo<<n[1]<<"i"<<endl;
    }
void sumar(float n1[], float n2[]){
    cout<< "\t\t Suma de Complejos "<<endl<<endl;
    char signo;
    if(n1[1]>=0){
            signo='+';
            }else{
                signo=' ';}
    cout<<"\tComplejo 1: \t"<<n1[0]<<signo<<n1[1]<<"i"<<endl;
    if(n2[1]>=0)
        {
            signo='+';}
            else{
                    signo=' ';
    }
    cout<<"\t\Complejo 2: \t"<<n2[0]<<signo<<n2[1]<<"i"<<endl;
    cout<<"\t\t     --------- "<<endl;
    if(n1[1]+n2[1]>=0){
            signo='+';}
    else{
            signo=' ';
    }
    cout<<"\tResultado: \t"<<n1[0]+n2[0]<<signo<<n1[1]+n2[1]<<"i"<<endl<<endl;}
void restar(float n1[], float n2[]){
    cout<< "\t\t Resta de Complejos "<<endl<<endl;
    char signo;
    if(n1[1]>=0)
        {
            signo='+';}
    else{
            signo=' ';
    }
    cout<<"\tComplejo 1: \t"<<n1[0]<<signo<<n1[1]<<"i"<<endl;
    if(n2[1]>=0){
            signo='+';}
    else{
            signo=' ';}
    cout<<"\tComplejo 2: \t"<<n2[0]<<signo<<n2[1]<<"i"<<endl;
    cout<<"\t\t     --------- "<<endl;
    if(n1[1]-n2[1]>=0){
        signo='+';}
    else{signo=' ';
    }
    cout<<"\tResultado:  \t"<<n1[0]-n2[0]<<signo<<n1[1]-n2[1]<<"i"<<endl<<endl;
    }
void multiplicar(float n1[], float n2[]){
    cout<< "\t\t   Multiplicacion de Complejos "<<endl<<endl;
    char signo;
    if(n1[1]>=0){
            signo='+';}
    else{
            signo=' ';
    }
    cout<<"\tComplejo 1: \t"<<n1[0]<<signo<<n1[1]<<"i"<<endl;
    if(n2[1]>=0){
            signo='+';}
    else{signo=' ';
    }
    cout<<"\tComplejo 2: \t"<<n2[0]<<signo<<n2[1]<<"i"<<endl;
    cout<<"\t\t     --------- "<<endl;
    if((n1[0]*n2[1])+(n1[1]*n2[0])>=0){
            signo='+';}
    else{
            signo=' ';
    }
    cout<<"\tResultado: \t"<<(n1[0] * n2[0])+((n1[1]*n2[1])*(-1))<<signo<<(n1[0]*n2[1])+(n1[1]*n2[0])<<"i"<<endl;
    }
void opcion(int op){
    float n1[2],n2[2];
    switch(op){
    case 1 :
        leer(n1); leer(n2);
        break;
    case 2 :
        ver(n1); ver(n2);
        break;
    case 3 : sumar(n1,n2);break;
    case 4 : restar(n1,n2);break;
    case 5 : multiplicar(n1,n2);break;
    case 0 : cout<<"Fin del programa"<<endl;
    default : cout<<"La opcion no existe"<<endl;
    }
    }
