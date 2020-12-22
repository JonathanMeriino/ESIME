#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include <math.h>
#include <conio.h>
#include "viento.h"
#include "cuerdas.h"
#include "percu.h"
#include "exportar.h"
#include "librop.h"
#include "accesori.h"
using namespace std;

int mostrar_menu(string dato[],int lim){
    int opcion;
    system("cls");
    cout<<"\t\t\t *** "<<dato[0]<<" *** \n\n";
    for(int i=1;i<lim;i++){
        cout<<"\t\t"<<i<<".- "<<dato[i]<<endl;
    }
    cout<<"\n\t\t 0.- Salir "<<endl;
    cout<<"\n\t Seleccionar opcion : ";
    cin>>opcion;
    return opcion;
}
void cuerdas(){
int op;
 datos *cuerda;
    string menup[]={"Inventario Instrumentos de Cuerda","Guitarras","Bajo","Violin"};
    do{
        op=mostrar_menu(menup,4);
        switch (op){
            case 1:guitarra(guitarras);break;
            case 2:bajo(bajos);break;
            case 3:violin(violines);break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);break;
            default :cout<<"\n La opcion no existe ...";Sleep(1000);break;
            }
    }while(op!=0);
}
void viento(){
    int op;
    datos2 *vientos;
    string menup[]={"Inventario Intrumentos de Viento","Flautas","Trompetas","Saxofon"};
    do{
        op=mostrar_menu(menup,4);
        switch (op){
            case 1:flauta(flautas);break;
            case 2:trompeta(trompetas);break;
            case 3:saxofon(saxofones);break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);break;
            default :cout<<"\n La opcion no existe ...";Sleep(1000);break;
            }
    }while(op!=0);
}
void percu(){
    int op;
    personal ventas,mante,limpia,segu;
   string menup[]={"Registro del personal","Vendedores","Mantenimiento","Limpieza","Seguridad"};
    do{
        op=mostrar_menu(menup,5);
        switch (op){
            case 1:ventas.equipo1();break;
            case 2:mante.equipo2();break;
            case 3:limpia.equipo3();break;
            case 4:segu.equipo4();break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);break;
            default :cout<<"\n La opcion no existe ...";Sleep(1000);break;
            }
    }while(op!=0);
}
void accesori(){
    int op,na;
articulos arti;
    string menup[]={"Realizar Venta","Alta de Venta","Ver venta"};
    do{
        op=mostrar_menu(menup,3);
        switch (op){
            case 1:arti.leer();break;
            case 2:arti.ver();break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);break;
            default :cout<<"\n La opcion no existe ...";Sleep(1000);break;
            }
    }while(op!=0);
}
void librop(){
    int op;
    string menup[]={"Inventario de Libros y Partituras","Libros","Partituras"};
    do{
        op=mostrar_menu(menup,3);
        switch (op){
            case 1:libro();break;
            case 2:parti();break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);break;
            default :cout<<"\n La opcion no existe ...";Sleep(1000);break;
            }
    }while(op!=0);
}
void exportar(){

    admin();
}
portada(){

    cout<<"\t\t\tInstituto Politecnico Nacional "<<endl;
    cout<<"\tEscuela Superior de Ingenieria Electtrica y Mecanica Unidad Zacatenco"<<endl;
    cout<<"\t\tAcademia de Computacion - Fundamentos de Programacion " <<endl;
    cout<<"\t\t\t Jorge Alejandro Anzaldo Bustos"<<endl;
    cout<<"\n\tIntegrantes:\n\tAvila Monterosas Juan Pablo\n\tBenitez Merino Leonardo Jonathan\n\tBurgos Flores Gerardo\n\tCacheux Limon Andrea Daniela\n\tRodriguez Luna Octavio\n\tValverde Pacheco Hugo"<<endl;
    getch();
}
menu(){
int op;
    string menup[]={"Tienda de Instrumentos Musicales Elite","Instrumentos de Cuerda","Instrumentos de Viento","Libros y Partituras","Realizar Venta","Registro del Personal","Menu del Programador"};
    do{
        op=mostrar_menu(menup,7);
        switch (op){
            case 1:cuerdas();break;
            case 2:viento();break;
            case 3:librop(); break;
            case 4:accesori();break;
            case 5:percu() ;break;
            case 6:exportar();break;
            case 0:cout<<" Saliendo ... \n";Sleep(1000);break;
            default :cout<<"\n La opcion no existe ...";Sleep(1000);break;
}
}while(op!=0);
}



