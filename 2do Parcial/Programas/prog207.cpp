//Benitez Merino Leonardo Jonathan
#include<iostream>
#include<stdlib.h>
using namespace std;

int menu(int &);
int sumar(int, int);
int restar(int,int);
int multiplicar(int,int);
int dividir(int,int);
void opcion(int);
main(){
    int op,n1,n2,s;
do{
    cout<<"\t Menu de Operaciones Basicas"<<endl;
    menu(op);
    opcion(op);
    sumar(n1,n2);
    restar(n1,n2);
    multiplicar(n1,n2);
    dividir(n1,n2);
    }while(op!=0);
}
int menu(int &op){
    int n1,n2;
    cout<<"\nIngresa el primer numero: ";
    cin>>n1;
    cout<<"Ingresa el segundo numero: ";
    cin>>n2;
    system("cls");
    cout<<"\t\t Que quieres hacer: "<<endl;
    cout<<"\t 1.- Leer "<<endl;
    cout<<"\t 2.- Sumar "<<endl;
    cout<<"\t 3.- Restar"<<endl;
    cout<<"\t 4.- Multiplicar "<<endl;
    cout<<"\t 5.- Dividir "<<endl;
    cout<<"\t 0.- Salir "<<endl;
    cout<<"Elige una opcion : ";
    cin>>op;
}
int sumar(int n1, int n2){
    int s;
    s= n1 + n2;
    return s;
}
int restar(int n1, int n2){
    int r;
    r = n1 - n2;
    return r;
}
int multiplicar(int n1, int n2){
    int m;
    m = n1 * n2;
    return m;
}
int dividir(int n1, int n2){
    int d;
    d = n1 / n2;
    return d;
}
void opcion(int op){
    int n1,n2;
    switch(op){
    case 1 :cout<<"Los numeros son: "<< n1 << " y " <<n2<<endl;break;
    case 2 :cout<<"La suma de "<<n1<<" + "<<n2<<" = "<<sumar(n1,n2)<<endl;break;
    case 3 :cout<<"La resta de "<<n1<<" - "<<n2<<" = "<< restar(n1,n2)<<endl;break;
    case 4 :cout<<"La Multiplicacion de "<<n1<<" * "<<n2<<" = "<<multiplicar(n1,n2)<<endl;break;
    case 5 :cout<<"La Division "<<n1<<" / "<<n2<<" = "<<dividir(n1,n2)<<endl;break;
    case 0:cout<<"Salir"<<endl;break;
    default:cout<<" La opcion no existe "<<endl;
    }

}
