#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
struct empleados{
    int id;
    string nombre;


};
main(){
    int np;
empleados profesores[30];
cout<<"Cuanto empleados desea capturar: ";cin>>np;
cout<<"\n\tDatos de los empleados"<<endl;
for(int i=0; i<np ;i++){


cout<<"Identificacion: ";cin>>profesores[i].id;
fflush(stdin);
cout<<"Nombre: ";getline(cin,profesores[i].nombre);
}

cout<<"\t\n Ver los datos de los empleados "<<endl;
for(int i=0; i<np ; i++){

    cout<<"Identificacion: "<<profesores[i].id<<endl;
    cout<<"Nombre: "<<profesores[i].nombre<<endl;

}



}
