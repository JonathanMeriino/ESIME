//Ciclo While- Ejemplo
#include<iostream>
#include<stdlib.h>
using namespace std;
main(){
 int numero;                                                       //Declaramos una variable 
    cout<<"\t\tCiclo do-while"<<endl;
    cout<<"\tEl ciclo seguira hasta que escribas 0"<<endl;
    system("pause");
    do{
        system("cls");
        cout<<"Escribe un numero entero: ";
        cin>>numero;                                             //Le damos un valor a la variable numero
        cout<<"El numero que escribiste es: "<<numero<<endl;
        system("pause");
    } while(numero!=0);                                    //Condicional, se ejecutara mientras la variable numero tenga un valor diferente de cero
    cout<<" \n Fin del ciclo\n";
    system("pause");
}
