#include<iostream>
#include<stdlib.h>
using namespace std;
//Prototipos
int menu(void);
void leer(float []);
void ver(float[]);
void sumar(float [], float []);
void restar(float [], float[]);
void multiplicar(float [], float[]);
void opcion(int);
main(){
    float P1[3],P2[3];
    int op;
    do{
        system("cls");
        leer(P1);
        ver(P1);
        leer(P2);
        ver(P2);
        sumar(P1,P2);
        restar(P1,P2);
        multiplicar(P1,P2);
        cout<<endl;
        system("pause");
    }while(op!=0);
}
void leer(float P[]){
    cout<<"\n";
    for(int exp=2;exp>=0;exp--){
        cout<<"Ingresa el valor de X^"<<exp<<" = ";
        cin>>P[exp];}}
void ver(float P[]){
    cout<<"\nTu polinomio es: ";
        for(int exp=2;exp>=0;exp--){
            char signo;
        if(P[exp]>=0){signo='+';}else{signo=' ';}
            cout<<P[exp]<<"X^"<<exp<<signo;}
            cout<<"\n";}
void sumar(float P1[], float P2[]){
    cout<<"\nLa suma es: ("<<P1[2]+P2[2]<<") X^2 + ("<<P1[1]+P2[1]<<") X + ("<<P1[0]+P2[0]<<")"<<endl;}
void restar(float P1[], float P2[]){
    cout<<"\nLa resta es: "<<P1[2]-P2[2]<<" X^2 - "<<P1[1]-P2[1]<<" X - "<<P1[0]-P2[0]<<endl;}
void multiplicar(float P1[],float P2[]){
cout<<"\nLa multiplicacion es: ";
cout<<(P1[2]*P2[2])<<"X^4"<<"+"<<((P1[2]*P2[1])+(P1[1]*P2[2]))<<"X^3"<<"+"<<((P1[2]*P2[0])+(P1[1]*P2[1])+(P1[0]*P2[2]))<<"X^2"<<"+"<<((P1[1]*P2[0])+(P1[0]*P2[1]))<<"X"<<"+"<<P1[0]*P2[0]<<endl;}
