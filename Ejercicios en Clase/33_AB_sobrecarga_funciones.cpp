/*
En C++, 2 o más funciones pueden compartir el mismo nombre,
siempre y cuando sus parámetros sean diferentes, tanto en numero y/o tipo de dato.
El proceso es llamado sobrecarga (overload) de funciones.

by Jorge Anzaldo

*/

#include <iostream>

using namespace std;

// creando prototipos
void leer(int &, int &);
void leer (float  M[][10], int, int);
void ver(float M[][10], int, int);

main(){
    int filas, columnas;
	float M[10][10];
	leer(filas,columnas);
	leer(M,filas,columnas);
	ver(M,filas,columnas);
}
void leer(int &f, int &c){
    cout<<"   Numero de Filas : "; cin>>f;
	cout<<"Numero de Columnas : "; cin>>c;
}
void leer (float  M[][10], int f, int c){
    for (int i=0;i<f; i++){
        for(int j=0; j<c; j++){
            cout <<"Elemento ["<<i<<"]["<<j<<"] : ";
            cin>>M[i][j];
        }
    }
}

void ver(float M[][10], int f, int c){
    for (int i=0;i<f; i++){
        for(int j=0; j<c; j++){
             cout <<M[i][j]<<"   ";
        }
        cout<<"\n";
    }
}
