//Este programa indica si una letra es vocal o no
#include<iostream>
#include <stdlib.h>
using namespace std;
main(){
    char letra;                                                                   //Declaramos nuestra variable tipo caracter
    cout<<"\t\tPrograma que indica si una letra es una Vocal o no"<<endl;
    cout<<"Escribe una letra : ";
      cin>>letra;                                                 //Ingresamos una letra
    cout<<"\n La letra " <<letra<< " es : ";                  //Imprime la letra que ingresamos
    switch(letra){                                               //condicional que contiene nuestra letra ingresada
      //En los case evalua si la letra que ingresamos es a,e,i,o,u
      case 'a':cout<<"Vocal" <<endl;
        break;
      case 'e' : cout<<" Vocal " <<endl;
        break;
      case 'i' : cout<<" Vocal " <<endl;
        break;
      case 'o': cout<<" Vocal "<<endl;
        break;
      case 'u': cout<<"Vocal"<<endl;
        break;
      //Si no es ninguna de las letras anteriores, concluye que es una constante e imprime mensaje en pantalla  
      default: cout<< "Consonante "<<endl;
    }

}
