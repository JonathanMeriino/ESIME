#include <iostream>
#include <stdlib.h>
using namespace std;
void leer(int &,int &);
void ver (int ,int );
void leer (float [][10],int ,int );
void ver (float [][10],int ,int);

main(){
        int fila,columna;
        float M1[10][10];
        leer(fila,columna);
        ver(fila,columna);
        leer(M1,fila, columna);
        ver(M1, fila, columna);
}
void leer(int &f,int &c){
cout<<"Fila: "; cin>>f;
cout<<"Columna: "; cin>>c;

}
void ver(int f,int c ){
cout<<" Limite fila: "<<f<<endl;
cout<<" Limite Columna: "<<c<<endl;

}
void leer(float M[][10],int f,int c){
cout<<"Valores de Matrices "<<endl;

for(int i=0 ; i<f ; i++){
    for(int j=0; j<c; j++)
    {
        cout<<"Elemento: ["<<i<<"]["<<j<<"]";
    cin>> M[i][j];
    }
}
}
void ver(float M[][10],int f, int c){
cout<<"Tu matriz es: " <<endl;

for(int i=0 ; i<f ; i++){
    for(int j=0; j<c; j++)
    {
    cout<< M[i][j]<< " ";
    }
cout<<"\t"<<endl;
}

}
