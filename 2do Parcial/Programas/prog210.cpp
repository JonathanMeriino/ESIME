//Ejemplo basico de arrays
#include <iostream>
#include <stdlib.h>
using namespace std;
void leer (int []);
int ver(int []);
main(){
 int N[10];             //Declaramos nuestro array N de 10 espacios                   
 leer (N);              //Llama a la funcion leer
 ver (N);               //Llama a la funcion ver
}
void leer (int N[]){    // Funcion que lee los numeros de nuestro arreglo 

  cout<<"Programa que guarda 10 enteros en un arreglo"<<endl;
   for(int i=0;i<10;i++){                                //Condicional para almacenar 10 numeros enteros
       cout<<"Dame un numero: "<<endl;
       cin>>N[i];                                    //Ingresaremos cada valor hasta llegar a 10                   
    }
}
int ver (int N[]){                       //La funciones imprime los valores ingresados 
    for(int i=0;i<10;i++){
        cout<<"El numero guardado en la posicion "<<i<<" = "<<N[i]<<endl; //Imprime el numero y la posicion
        system("pause");
    }
}
