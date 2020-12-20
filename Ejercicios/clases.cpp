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
main(){

    autos kia;


    cout<<"Datos Kia"<<endl;
    kia.leer();

    kia.ver();
     cout<<"Datos Ford"<<endl;

    autos ford;
    ford.leer();

    ford.ver();



}
