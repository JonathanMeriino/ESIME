//El programa lee un numero e indica el mes que corresponde
#include<iostream>
#include<stdlib.h>
using namespace std;
void leer(int &);
void convertir(int);
main(){
    int no_mes;                                                                      //Declaramos nuestro tipo de dato entero   
    cout<<"\tPrograma que lee un numero e indica el mes que corresponde"<<endl;
    leer(no_mes);                                                                    //Llama a la funcion leer    
    convertir(no_mes);                                                               //llama a la fucion convertir       
}
void leer(int &no_mes){                                         //La funcion lee el numero que ingresemos y guarda su valor
    cout<<"Dame el numero del mes: ";
    cin>>no_mes;                                               //Colocamos un numero del 1-12  
}
void convertir(int no_mes){                             //La funcion convierte el numero ingresado al mes que corresponde             
    cout<<"Tu mes es: ";
    switch(no_mes){
        //Evalua nuestro numero con los siguientes case, imprime el caso que coincida con el numero ingresado
        case 1: cout<<"Enero"<<endl;break;
        case 2: cout<<"Febrero"<<endl;break;
        case 3: cout<<"Marzo"<<endl;break;
        case 4: cout<<"Abril"<<endl;break;
        case 5: cout<<"Mayo"<<endl;break;
        case 6: cout<<"Junio"<<endl;break;
        case 7: cout<<"Julio"<<endl;break;
        case 8: cout<<"Agosto"<<endl;break;
        case 9: cout<<"Septiembre"<<endl;break;
        case 10: cout<<"Octubre"<<endl;break;
        case 11: cout<<"Noviembre"<<endl;break;
        case 12: cout<<"Diciembre"<<endl;break;
        //Si ingresamos un numero diferente de los anteriores arroja el siguiente mensaje
        default: cout <<" No existe"<<endl;
    }
    system("pause");
}
