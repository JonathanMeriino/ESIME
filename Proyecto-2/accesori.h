#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

class articulos{

    int cant[20],na;
    string art[20];
    float precio[20];
    public:
    void leer();
    void ver();
    void calcular();

};

void articulos::leer(){

         system("cls");
          cout<<"\n\t\t\t*****AGREGAR AL CARRITO*****"<<endl;
    cout<<"Cuantos articulos vas a agregar: ";cin>>na;
    for(int i=0; i<na; i++){
    cout<<"\nAGREGAR NUEVO "<<endl;
    cout<<"\tCantidad: ";cin>>cant[i];
    fflush(stdin);
    cout<<"\tArticulo: ";getline(cin,art[i]);
    cout<<"\tPrecio x pieza ";cin>>precio[i];
    }

}


void articulos::ver(){

         system("cls");
    cout<<"\n\t\t\t*****ESTE ES TU CARRITO*****"<<endl;
     for(int i=0; i<na; i++){
    cout<<"\t\t--------------------------------------------------------"<<endl;
    cout<<"\t\tCantidad:"<<cant[i]<<"\t\tArticulo:"<<art[i]<<"\n\t\tPrecio:"<<precio[i]<<"\t\tPrecio total: "<<precio[i]*cant[i]<<endl;
    }getch();
    cout<<"Total a pagar: ";
    getch();
}



