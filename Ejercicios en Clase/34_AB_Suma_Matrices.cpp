/* Suma de Matrices
by Jorge Anzaldo */


#include <iostream>
#include <stdlib.h>
using namespace std;

// funciones prototipos
void leer (float  [][3]);
void ver(float [][3]);
void sumar(float [][3],float [][3],float [][3]);

main(){
	float M1[3][3], M2[3][3],M3[3][3];
	cout<<" Programa que suma 2 matrices de 3x3 \n\n";
	cout<<"    Matriz 1  \n";
	leer(M1);
	cout<<"    Matriz 2  \n";
	leer(M2);
	cout<<"    Matriz 1  \n";
	cout<<" ---------------------- \n";
	ver(M1);
	cout<<"    Matriz 2  \n";
	cout<<" ---------------------- \n";
	ver(M2);
	cout<<"    Suma de M1 + M2   \n";
	cout<<" ---------------------- \n";
	sumar(M1,M2,M3);
	ver(M3);
	cout<<"\n\n";system("pause");
}
//Desarrollo de funciones
void leer (float  M[][3]){
    for (int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            cout <<"Elemento ["<<i<<"]["<<j<<"] : ";
            cin>>M[i][j];
        }
    }
}
void ver(float M[][3]){
    for (int i=0;i<3; i++){
        for(int j=0; j<3; j++){
             cout <<M[i][j]<<"   ";
        }
        cout<<"\n";
    }
}
void sumar(float M1[][3],float M2[][3],float M3[][3]){
    for (int i=0;i<3; i++){
        for(int j=0; j<3; j++){
             M3[i][j]=M1[i][j]+M2[i][j];
        }
    }
}
