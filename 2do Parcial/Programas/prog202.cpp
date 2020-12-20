//Suma de dos variables con programacion modular
#include<iostream>
#include<stdlib.h>
using namespace std;

void leer(int &, int &);
int sumar(int,int);
void ver(int, int, int );
main(){
    int x,y,z;                                                             //Declaracion de nuestras 3 variables
    cout<<"\t\tSuma de variables con modular"<<endl;
    leer(x,y);                                                             //Se llama a la funcion leer
    z=sumar(x,y);                                                           //asignamos a z la funcion de suma
    ver(z,x,y);                                             //Imprime en pantalla nuesto resultado
}
void leer(int &x, int &y){                                      //Funcion que lee nuestras variables ingresadas, almacena nuestros numeros
    cout<<"Dame el valor de x: ";
    cin>>x;                                                             //Le damos un valor a x
    cout<<"Dame el valor de y: ";
    cin>>y;                                                             //Le damos un valor a y
}
int sumar(int x,int y){                                   //Funcion que suma nuestras variables
    int z;                                                  
    z=x+y;                                                //asignamos a z como el resultado nuestra suma      
    return z;                                             //retorna el valor de z
}
void ver(int z, int x, int y){                              //la funcion imprime nuestra suma 
    cout<<"La suma de: "<<x<<" + "<<y<<" = "<<z<<endl;        //Mensaje que imprime nuestra suma
    system("pause");
}
