//Menu de operaciones basicas
#include<iostream>
#include<stdlib.h>
using namespace std;
//Declaracion de nuestras funciones para cada operacion
int menu(int &);
int sumar(int, int);
int restar(int,int);
int multiplicar(int,int);
int dividir(int,int);
void opcion(int);
main(){
    int opc,no1,no2;                           //Declaracion de nuestras variables
    cout<<"\t Menu de Operaciones Basicas"<<endl;
    menu(opc);                                           //Llamado a nuestra funcion de menu
    sumar(no1,no2);                             //Llamado a nuestra funcion de suma
    restar(no1,no2);                              //Llamado a nuestra funcion de resta
    multiplicar(no1,no2);                         //Llamado a nuestra funcion de multiplicacion
    dividir(no1,no2);                             //Llamado a nuestra funcion de dividir
    opcion(opc);
}
int menu(int &opc){                      //La funcion muestra el menu principal y escogemos la opcion que queramos 
    int no1,no2;                            //Declaramos las variables correspondientes a nuestros dos numeros
    cout<<" 1.- Ver "<<endl;
    cout<<" 2.- Sumar "<<endl;
    cout<<" 3.- Restar"<<endl;
    cout<<" 4.- Multiplicar "<<endl;
    cout<<" 5.- Dividir "<<endl;
    cout<<" 6.- Salir "<<endl;
    cout<<"Elige una opcion : "; cin>>opc;
    cout<<"\nIngresa el primer numero: ";
        cin>>no1;                                   //Le damos un valor a nuestro 1er numero
    cout<<"Ingresa el segundo numero: ";
        cin>>no2;                                   //Le damos un valor a nuestro 2do numero
}
int sumar(int no1, int no2){                        //La funcion hace la operacion de suma entre los 2 numeros ingresado
    int suma;                          
    suma = no1 + no2;                            //Asignamos el resultado a suma
    return suma;                       //retornamos el resultado de la suma
}
int restar(int no1, int no2){                       //La funcion hace a operacion de resta entre los 2 numeros ingresados
    int resta;
    resta = no1 - no2;                        //Asignamos el resultado a resta
    return resta;                   //retornamos el resultado de la resta
}
int multiplicar(int no1, int no2){                  //La funcion hace la operacion de multiplicacion
    int multi;          
    multi = no1 * no2;                                //Asignamos el resultado a multi
    return multi;                           //retornamos el resultado de la multiplicacion
}
int dividir(int no1, int no2){              //La funcion divide los 2 numeros que ingresamos
    int div;
    div = no1 / no2;                              //Asignamos el resultado de la division
    return div;                             //retornamos el valor de la division
}
void opcion(int opc){                    //Ejecuta la opcion que escogimos en el menu      
    
    int no1,no2;
    switch(opc){
        case 1 :cout<<"Los numeros son: "<< no1 << " y " <<no2<<endl;break;  //Imprime los numeros que ingresamos
        case 2 :cout<<"La suma de "<<no1<<" + "<<no2<<" = "<<sumar(no1,no2)<<endl;break; //Imprime el resultado de la suma
        case 3 :cout<<"La resta de "<<no1<<" - "<<no2<<" = "<< restar(no1,no2)<<endl;break;//Imprime el resultado de la resta
        case 4 :cout<<"La Multiplicacion de "<<no1<<" * "<<no2<<" = "<<multiplicar(no1,no2)<<endl;break; //Imprime el resultado de la multiplicacion
        case 5 :cout<<"La Division "<<no1<<" / "<<no2<<" = "<<dividir(no1,no2)<<endl;break; //Imprime el resultado de la division
        case 6 :cout<<"Salir"<<endl;break;    //Sale del menu
        //Si la opcion es difetente a las anteriores imprime los siguiente
        default:cout<<" La opcion no existe "<<endl;     
    }

}
