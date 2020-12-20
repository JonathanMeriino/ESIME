//Programa que lee dia, mes y año. Imprime la fecha completa
#include<iostream>
#include<stdlib.h>
using namespace std;
//Declaramos nuestras dos funciones
void leer(int &,int &,int &);
void convertir(int, int, int);
main(){
     int dia,mes,anio;                                  //Declaramos nuestras 3 variables tipo entero correspondientes 
    cout<<"\t\tPrograma que da la fecha"<<endl;
                                               
    leer(dia,mes,anio);                                 //Llamado a la funcion leer
    convertir(mes,dia,anio);                            //Llamado a la funcion convertir

}
void leer(int &dia,int &mes,int &anio){                 //La funcion lee nuestras variables de dia, mes, año y las almacena 
    cout<<"Dame el dia: ";
        cin>>dia;                                           //Lee el numero correspondiente al dia
    cout<<"Dame el Mes: ";
        cin>>mes;                                           //Lee el numero correspondiente al mes    
    cout<<"Dame el anio: ";
        cin>>anio;                                          //Lee el numero correspondiente al año
}
void convertir(int mes, int dia, int anio){             //Imprime la fecha completa
    cout<<"\nCDMX a " <<dia<< " de " ;              //Imprime el numero que ingresamos correspondiente al dia
    switch(mes){
        //Compara el numero que ingresamos del mes e imprime el correspondiente
        case 1: cout<<"Enero ";break;
        case 2: cout<<"Febrero ";break;
        case 3: cout<<"Marzo "; break;
        case 4: cout<<"Abril "; break;
        case 5: cout<<"Mayo ";break;
        case 6: cout<<"Junio ";break;
        case 7: cout<<"Julio ";break;
        case 8: cout<<"Agosto ";break;
        case 9: cout<<"Septiembre ";break;
        case 10: cout<<"Octubre ";break;
        case 11: cout<<"Noviembre ";break;
        case 12: cout<<"Diciembre ";break;
        //Si el numero ingresado no coincide con alguno de los anteriores imprime lo siguiente
        default: cout <<"#### ";
    }
        cout<< " del " <<anio<<endl;        //Imprime el numero que ingresamos del año
        system("pause");
}
