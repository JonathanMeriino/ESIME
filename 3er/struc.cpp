#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

struct personas{
int id;
string nombre;
float peso;
char sexo;

};

main(){
    personas alumno;
cout<<"Leer Datos del alumno"<<endl;
cout<<"Boleta: ";cin>>alumno.id;
fflush(stdin);
cout<<"Nombre: ";getline(cin,alumno.nombre);
cout<<"Peso ";cin>>alumno.peso;
cout<<"Sexo: ";cin>>alumno.sexo;
system("pause");
cout<<" Ver los datos "<<endl;
cout<<"Boleta: "<<alumno.id<<endl;
cout<<"Nombre: "<<alumno.nombre<<endl;
cout<<"Peso: "<<alumno.peso<<endl;
cout<<"Sexo: "<<alumno.sexo<<endl;



}
