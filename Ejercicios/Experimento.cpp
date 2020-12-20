#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class autos{

    int anio;
    string modelo,color;
    float precio;
    public:
    void leer();
    void ver();

};

void autos::leer(){

    cout<<"Anio ";cin>>anio;
    fflush(stdin);
    cout<<"Modelo: ";getline(cin,modelo);
    cout<<"Color: ";getline(cin,color);
    cout<<"Precio: ";cin>>precio;

    }
void autos:: ver(){
    cout<<"Anio: "<<anio<<endl;
    cout<<"Modelo: "<<modelo<<endl;
    cout<<"Color: "<<color<<endl;
    cout<<"Precio: "<<precio<<endl;


}
void menu(int );
void au1(autos);

main(){
    int op;
    autos kia;
    autos ford;
    system("cls");

    menu(op);


}
void menu(int op){
    autos kia;
     autos ford;
system("cls");
    cout<<"\n\t\tINVENTARIO Autos\n"<<endl;
    cout<<"\t1. Marca Auto 1"<<endl;
    cout<<"\t2. Marca Auto 2 "<<endl;
    cout<<"\t3. Marca Auto 3 "<<endl;
    cout<<"\t0. Salir " <<endl;
    cout<<"Seleccione una opcion: ";cin>>op;
switch(op){
    case 1:
        au1(kia);

break;

case 2:
    cout<<"Datos de Auto 2"<<endl;
    break;



case 3:
    cout<<"Datos de Auto 3"<<endl;
    break;

   default: cout<<"Tu Opcion no existe"<<endl;
}
}
void au1(autos kia){
int op;
cout<<"Datos del Auto 1: "<<endl;
cout<<"1. Dar alta "<<endl;
    cout<<"2. Ver dato"<<endl;
    cout<<"0. Salir "<<endl;
    cout<<"Seleccione la opcion: ";cin>>op;
switch(op){
    case 1:
    kia.leer();
    break;
    case 2:
    kia.ver();
    break;
    default: cout<<"Tu opcion no existe"<<endl;
    }

}

