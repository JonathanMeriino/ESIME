//Programa que suma dos variables
#include<iostream>
#include<stdlib.h>
using namespace std;

main(){
    int x,y,z;                                                      //Declaramos nuestras 3 variables de tipo entero
    cout<<"\t\t*Programa que suma dos variables*"<<endl;
    cout<<"Valor de x: ";
    cin>>x;                                                         //Le asignamos un valor a x
    cout<<"Valor de y: ";
    cin>>y;                                                         //Le asignamos un valor a y                                            
    z=x+y;                                                          //El resultado de la suma se lo asignamos a z 
    cout<<"La suma es "<<x<<"+"<<y<<"="<<z<<endl;                   //Se imprime el valor de la suma
    system("pause");
}
