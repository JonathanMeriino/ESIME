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





