#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <string>
#define USER "c++"
#define PASS "java"
using namespace std;

int main(){
string pwd, id;
int contador=0;
bool ingresa = false;
do{
        system("cls");
    cout<<"Login"<<endl;
    cout<<"Usuario: ";
    getline(cin,id);
    cout<<"Password: ";
    //getline(cin,pwd);
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
    else{
        cout<<"\nEl usuario o contraseña son incorrectos " <<endl;
    cin.get();
    contador++;
        }
        }while(ingresa == false && contador <3);
    if(ingresa == false){
    cout <<"\nUsted no pudo ingresar el sistema "<<endl;
    }else{
    cout<<"\nBienvanido al sistema " <<endl;
    }

}
