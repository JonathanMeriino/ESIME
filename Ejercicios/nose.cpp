#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <string>
#define USER "elite"
#define PASS "burrito"
#define ADMIN "admi"
#define PWD "mantenimiento"

#include "menu.h"

using namespace std;

main(){


    string pwd, id;
int contador=0;
int mant1;
bool ingresa = false;
do{
        system("cls");
    cout<<"\t\t\t*****L O G I N***** "<<endl;

    cout<<"\tUSUARIO: ";
    getline(cin,id);
    cout<<"\tPASSWORD: ";

    char caracter;
    caracter=getch();
    pwd = "";
    while(caracter !=13){
    pwd.push_back(caracter);
    cout<<"*";
    caracter = getch();

    }
    if (USER == id && PASS == pwd){
            ingresa = true;

        }
    if(ADMIN == id && PWD == pwd){
        admin();
    }
    else{
        cout<<"\nEl usuario o contraseña son incorrectos " <<endl;
    cin.get();
    contador++;
        }
        }while(ingresa == false && contador <3);
    if(ingresa == false){
    cout <<"\nUSTED NO PUDO INGRESAR AL SISTEMA :( "<<endl;
    }else{
        system("cls");
    cout<<"\n\t\t*****BIENVENIDO DE NUEVO AL SISTEMA***** " <<endl;

   getch();
   system("cls");
   portada();
   menu();
    }


   cout<<"\n\t\t ...Gracias por utilizar el programa, ¡Vuelva Pronto! ... ";
   Sleep(1000);
}

Pegar en "menu.h" arriba de "portada()"
admin(){
   int mant1;
   system("cls");
        cout<<"\n Bienvenido al menu del desarollador\n";
        cout<<"Este menu te puede ayudar a darle mantenimiento al \nprograma o agregar alguna funcion\n";
        getch();
        system("cls");
        cout<<"¿Que deseas hacer?";
        cout<<"\n1.- Ver el codigo de main";
        cout<<"\n2.-Ver el codigo de menu";
        cout<<"\n3.-Ver el codigo de accesorio \n";
        cout<<"4.-Ver el codigo de cuerdas\n";
        cout<<"5.-Ver el codigo de exportar\n";
        cout<<"6.-Ver el codigo de libros y partituras \n";
        cout<<"7.-Contactar a los desarolladores\n";
        cout<<"Digita tu opcion deseada: ";
        cin>>mant1;
        switch(mant1){
            case 1: system("main.cpp");break;
            case 2: system("menu.h");break;
            case 3: system("accesori.h");break;
            case 4: system("cuerdas.h");break;
            case 5: system("exportar.h");break;
            case 6: system("libro.h");break;
            case 7: cout<<"Gerardo Burgos Flores 5578671896";system ("pause");break;
                }

}


