#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
struct empleados{
    int id;
    string nombre;


};
main(){
    int np;
empleados profesores[30];
cout<<"Cuanto empleados desea capturar: ";cin>>np;

for(int i=0, i<np ,i++){
cout<<"Datos de los empleados"<<endl;
fflush(stdin);
cout<<"Identificacion: " cin>>profesores[i].id;
    cout<<"Nombre: "getline(cin,profesores[i].nombre)
}



}
