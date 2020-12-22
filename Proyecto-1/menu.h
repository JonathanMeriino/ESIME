#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include <math.h>
#include "flotantes.h"
#include "complejos.h"
#include "polinomios.h"
#include "funcionestrig.h"
#include "areasv.h"
#include "figuras.h"
#include "numerosaleatorios.h"
#include "leyes.h"
using namespace std;

int mostrar_menu(string dato[],int lim){
    int opcion;
    system("cls");
    cout<<"\t\t\t *** "<<dato[0]<<" *** \n\n";
    for(int i=1;i<lim;i++){
        cout<<"\t\t"<<i<<".- "<<dato[i]<<endl;
    }
    cout<<"\n\t\t\t 0.- Salir "<<endl;
    cout<<"\n\t Seleccionar opcion : ";
    cin>>opcion;
    return opcion;
}


void flotantes(){
    int op;
    float x,y;
    string menup[]={"Instrumentos de Cuerda","Leer","Ver","Sumar","Restar"};
    do{
        op=mostrar_menu(menup,5);
        switch (op){
           case 1:leer(x);leer(y);break;
            case 2:ver(x);ver(y);system("pause");break;
            case 3:sumar(x,y);system("pause");break;
            case 4:restar (x,y);system("pause");break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);break;
            default :cout<<"\n La opcion no existe ...";Sleep(1000);break;

        }
    }while(op!=0);
}
void polinomios(){
    int op,n;
    float p1[10],p2[10],p3[10];
    string menup[]={"Instrumentos de viento","Leer","Ver","Sumar","Restar","Tabular"};
    do{
        op=mostrar_menu(menup,6);
        switch (op){
           case 1:leer_n(n);leer(p1,n);leer(p2,n);system("pause");break;
            case 2:ver(p1,n);ver(p2,n);system("pause");break;
            case 3:sumar(p1,p2,p3,n);system("pause");break;
            case 4:restar (p1,p2,p3,n);system("pause");break;
            case 5:cout<<"tabular()";system("pause"); break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);break;
            default :cout<<"\n La opcion no existe ...";Sleep(1000);break;

        }
    }while(op!=0);
}

void funcionestrig(){
   int op;
    float p,resul;
string menup[]={"Baterias y Percusiones","Seno","Coseno","Tangente","Secante","Cosecante","Cotangente"};
   do{
         op=mostrar_menu(menup,7);
        switch (op){
            case 1:
                seno(p,resul); system("pause");
                break;
            case 2:
                coseno(p,resul);system("pause");
                break;
            case 3:
                tangente(p,resul); system("pause");
                break;
            case 4:
                secante(p,resul); system("pause");
                break;
            case 5:
                cosecante(p,resul); system("pause");
                break;
            case 6:
                cotangente(p,resul); system("pause");
                break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);break;
            default :cout<<"\n La opcion no existe ...";Sleep(1000);break;

        }

   }while(op!=0);


}
void areasv(){
   int op;
    float pi =3.1416;
    float radio, ALTURA, area, volumen,h,k,per,r,rad;
    int x,y;
string menup[]={"Amplis y Pedales","Cuadrado","Rectangulo","Triagnulo","Circulo","Cilindro","Cono","Esfera"};
   do{
         op=mostrar_menu(menup,8);
        switch (op){
            case 1:
                cuadrado(area,per); system("pause");
                break;
            case 2:
                rectangulo(x,y);system("pause");
                break;
            case 3:
                triangulo(x,y); system("pause");
                break;
            case 4:
                circulo(r); system("pause");
                break;
            case 5:
                cilindro(area,volumen); system("pause");
                break;
            case 6:
                cono(r,h); system("pause");
                break;
            case 7:
                esfera(rad); system("pause");
                break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);break;
            default :cout<<"\n La opcion no existe ...";Sleep(1000);break;

        }

   }while(op!=0);}

   void complejos(){
    int op;
   float N1[2];
   float N2[2];
    string menup[]={"Menu complejos","Leer","Ver","Sumar","Restar","Multiplicar"};
    do{
 op=mostrar_menu(menup,6);
        switch (op){
            case 1:leer(N1),leer(N2);break;
            case 2:ver(N1),ver(N2);system("pause");break;
            case 3:sumar(N1,N2);system("pause");break;
            case 4:restar (N1,N2);system("pause");break;
            case 5:multiplicar(N1,N2);system("pause");break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);break;
            default :cout<<"\n La opcion no existe ...";Sleep(1000);break;}
        } while (op!=0);
}



void figuras(){
  int op,n;
    string menup[]={"Menu Figuras","Cuadrado","Triangulo"};
    do{
        op=mostrar_menu(menup,3);
        switch (op){
           case 1:cuadrado(n);system("pause"); break;
            case 2:triangulo(n);system("pause");break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);break;
            default :cout<<"\n La opcion no existe ...";Sleep(1000);break;

        }
    }while(op!=0);
}
void numerosaleatorios(){
  int numeros[10],op;
    string menup[]={"Menu Numeros Aleatorios","Generar","Ordenar","Ver Numeros"};
    do{
        op=mostrar_menu(menup,4);
        switch (op){
           case 1:generar_numeros_aleatorios(numeros);system("pause"); break;
            case 2:ordenar_numeros(numeros);system("pause");break;
            case 3:ver_numeros(numeros);system("pause"); break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);break;
            default :cout<<"\n La opcion no existe ...";Sleep(1000);break;

        }
    }while(op!=0);
}
void leyes(){
    int op;
  float V,I,R;
    string menup[]={"Menu Ley de Ohm","Leer","Ver","Calcular"};
    do{
        op=mostrar_menu(menup,4);
        switch (op){
           case 1:leer(I,R);system("pause"); break;
            case 2:ver(I,R);system("pause");break;
            case 3:calcular_voltaje(I,R);system("pause"); break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);break;
            default :cout<<"\n La opcion no existe ...";Sleep(1000);break;

        }
    }while(op!=0);
}

menu(){

    system("color b5");
    cout<<"\t\t\tInstituto Politecnico Nacional "<<endl;
    cout<<"\tEscuela Superior de Ingenieria Electtrica y Mecanica Unidad Zacatenco"<<endl;
    cout<<"\t\tAcademia de Computacion - Fundamentos de Programacion " <<endl;
    cout<<"\t\t\t Jorge Alejandro Anzaldo Bustos"<<endl;
    cout<<"\n\tIntegrantes:\n\tAvila Monteron Juan Pablo\n\tBenitez Merino Leonardo Jonathan\n\tBurgos Flores Gerardo\n\tCacheux Andrea\n\tRodriguez Luna Octavio\n\tValverde Hugo"<<endl;
    system("pause");
    Sleep(2000);
    system("burrito.jpg");
    int op;
    string menup[]={"Tienda de Instrumentos Musicales Elite","Instrumentos de Cuerda","Instrumentos de Viento","Baterias y Percusiones","Amplis y Pedales","Microfonos","Libros y Partituras","Cositas","Accesorios "};
    do{
        op=mostrar_menu(menup,9);
        switch (op){
            case 1:flotantes();break;
            case 2:complejos();break;
            case 3:polinomios();break;
            case 4:funcionestrig();break;
            case 5:areasv();break;
            case 6:figuras();break;
            case 7: numerosaleatorios();break;
            case 8: leyes();break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);break;
            default :cout<<"\n La opcion no existe ...";Sleep(1000);break;

        }
    }while(op!=0);
}



