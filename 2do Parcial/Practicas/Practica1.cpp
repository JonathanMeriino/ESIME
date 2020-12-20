#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
using namespace std;
int menu(void);
void leer(float &, float &);
float cal(float, float);
void sel(int);
float valorx,valort;
main(){
    int op;
    do{
        system("cls");
        op=menu();
        sel(op);
    }while(op!=0);
}
int menu(void){
    int op;
    cout<<"\t\t\t ***** Practica 1: Serie de Taylor ***** \n\n";
    cout<<"\t\t        Ln (x+1) = x - x^2/2 + x^3/3 - x^4/4 + x^5/5...   \n\n";
    cout<<"      1.- Leer x y t\n\n";
    cout<<"      2.- Calcular los valores en la serie   \n\n";
    cout<<"      3.- Resultado de la serie   \n\n";
    cout<<"      0.- Salir  \n\n";
    cout<<"\t\n Seleccione una opcion : ";
    cin>>op;
    system("cls");
    return op;
}
void leer(float &_valorx, float &_valort){
    cout<<"\t\tLeer 'x' y 't' ";
    cout<<"\n\tValor x = ";
    cin>>_valorx;
    cout<<"\n\tValor t = ";
    cin>>_valort;
}
float calc(float _valorx, float _valort){
    float fx, s=0;
    int sig = 1;
    for (float i=1; i<=_valort; i++){
        cout<<"\n\tln(x+1)="<<_valorx<<"-"<<_valorx<<"^"<<i<<"/"<<i<<"="<<endl;
        fx = pow(_valorx,i)/(i) * sig ;
         s += fx;
         sig *= -1;
cout<<"\n\tEl resultado es = "<<fx<<"\n";
system("pause");
}
return s;
}
float serie(float _valorx, float _valort){
    cout<<"\nEl valor de la serie es = "<<calc(_valorx, _valort)<<"\n";

    system("pause");
}
void sel(int _op){
    switch(_op){
        case 1:
            leer(valorx,valort);
         break;
        case 2:
            calc(valorx,valort);
             break;
        case 3:
             serie(valorx,valort);
              break;
        case 0:
            cout<<"\n\t\t **Fin del Programa** \n";
            break;
        default:
            cout<<"\n La opcion que escogio, no existe \n";
            system("pause");
             break;
    }
}

