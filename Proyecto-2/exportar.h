#include<iostream>
#include<stdlib.h>
#include<windows.h>
#define ADMIN "admin"
#define PWD "cositas"
using namespace std;

 void admin(){
string pwd, id;
int ad,contador=0;
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
    if (ADMIN == id && PWD == pwd){
            ingresa = true;

        }
           else{
        cout<<"\nEl usuario o contraseña son incorrectos " <<endl;
    cin.get();
    contador++;
        }
        }while(ingresa == false && contador <3);
    if(ingresa == false){
    cout <<"\nUSTED NO PUDO INGRESAR AL MENU :( "<<endl;
    }else{
        system("cls");
    cout<<"\n\t\t*****BIENVENIDO DE NUEVO AL MENU DEL PROGRAMADOR***** " <<endl;
            cout<<"Este menu te puede ayudar a darle mantenimiento al programa o agregar alguna funcion\n";
     getch();
        cout<<"¿Que deseas hacer?";
        cout<<"\n1.- Ver Codigo main";
        cout<<"\n2.-Ver Codigo de menu";
        cout<<"\n3.-Ver Codigo de cuerdas \n";
        cout<<"4.-Ver Codigo de vientos\n";
        cout<<"5.-Ver el codigo de libros\n";
        cout<<"6.-Ver el codigo de Accesorios \n";
        cout<<"7.-Ver registros del personal\n";
        cout<<"8.- Pendiente \n";
        cout<<"9. Contactar con los Programadores \n";
        cout<<"0. Salir \n"<<endl;
        cout<<"Digita tu opcion deseada: ";
        cin>>ad;
        switch(ad){
            case 1: system("main.cpp");break;
            case 2: system("menu.h");break;
            case 3: system("cuerdas.h");break;
            case 4: system("vientos.h");break;
            case 5: system("librop.h");break;
            case 6: system("accesori.h");break;
            case 7: system("percu.h");break;
            case 8: system("percu.h");break;
            case 9:
                cout<<" Horario de atencion : 9:00 - 21:00 hrs "<<endl;
                cout<<"Gerardo Burgos Flores 5578671896"<<endl;
                cout<<"o comunicarse con su secretario Tony Stark 5518798447 "<<endl;
                getch(); break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);
            default:cout<<"Tu opcion no existe "<<endl;
getch();
}
}
}
