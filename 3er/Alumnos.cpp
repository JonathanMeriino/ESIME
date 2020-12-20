#include <iostream>
#include <stdlib.h>

using namespace std;

void leer(int &);
void leer(float [][7],int );
void ver(float [][7],int);
void calcular_promedio(float [][7],int);
main(){
    int na;
    float alumnos[30][7]={0};
    cout<<"\t Programa que lee hasta 30 alumnos con 3 calificaciones \n\n";
    leer(na);
    leer(alumnos,na);
    calcular_promedio(alumnos,na);
    ver(alumnos,na);
    system("pause");
}
void leer(int &a ){
    cout<<"Cuantos alumnos desea capturar : ";cin>>a;
}
void ver(float a[][7], int na){
    cout <<"Boleta\t\tP1\t\tP2\t\tP3\t\tProm "<<endl;
    for (int i=0;i<na; i++){
        for(int j=0; j<4; j++){
            cout<<a[i][j]<<"\t\t";
        }
        cout<<a[i][4]<<endl;
    }
}
void leer(float a[][7], int na){
    for (int i=0;i<na; i++){
        for(int j=0; j<4; j++){
            if(j==0){
                cout<<"Boleta: ";cin>>a[i][j];}
            if(j>0){
                cout<<"Calificacion Parcial "<<j<<" : ";cin>>a[i][j];}
                }
    }
}
void calcular_promedio(float a[][7],int na ){
    float prom;
    for (int i=0;i<na; i++){
        prom=0;
        for(int j=1; j<4; j++){
            prom+=a[i][j];
        }
        a[i][4]=prom/3;
    }
}
