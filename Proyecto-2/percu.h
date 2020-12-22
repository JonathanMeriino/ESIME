#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

class personal{

    int id[20],edad[20],ne;
    string nombre[20];
    float tiempo[20];
    public:
    void equipo1();
    void equipo2();
    void equipo3();
    void equipo4();

};

void personal::equipo1(){
int op;
do{
  system("cls");
    cout<<"\n\t\t*****REGISTRO VENDEDORES*****"<<endl;
    cout<<"\t1. Dar alta "<<endl;
    cout<<"\t2. Ver alta "<<endl;
    cout<<"\t3. Exportar "<<endl;
    cout<<"\t0. Salir "<<endl;
    cout<<"\tSeleccione una Opcion: ";cin>>op;
switch(op){
     case 1:
         system("cls");
    cout<<"Cuantos empleados desea agregar: ";cin>>ne;
    for(int i=0; i<ne; i++){
    cout<<"\nAGREGAR NUEVO "<<endl;
    cout<<"\tId: ";cin>>id[i];
    fflush(stdin);
    cout<<"\tNombre: ";getline(cin,nombre[i]);
    cout<<"\tEdad: ";cin>>edad[i];
    cout<<"\tTiempo en la empresa(anios): ";cin>>tiempo[i];
    }
break;
     case 2:
         system("cls");
    cout<<"\n\t\t\t*****DATOS DE VENDEDORES*****"<<endl;
     for(int i=0; i<ne; i++){
    cout<<"\t\t--------------------------------------------------------"<<endl;
    cout<<"\t\tID:"<<id[i]<<"\t\tNOMBRE:"<<nombre[i]<<"\n\t\tEDAD:"<<edad[i]<<"\t\tTIEMPO EN LA EMPRESA:"<<tiempo[i]<<endl;
    }getch();
break;

    case 3:
    system("cls");
    ofstream guardar ("Vendedores.txt");
    for(int i=0;i<ne;i++){
        guardar<<"Elemento "<<i+1<<":\n"<<id[i]<<endl;
        guardar<<nombre[i]<<"\n";
        guardar<<edad[i]<<"\n";
        guardar<<tiempo[i]<<"\n\n";
    }
    guardar.close();
    cout<<"\n\nTus datos han sido guardados en el archivo llamado \"Vendedores.txt\" y sus elementos son : \n\n";
    for (int i=0;i<ne;i++){
        cout<<"Elemento "<<i+1<<endl;
        cout<<id[i];
        cout<<"\n"<<nombre[i];
        cout<<"\n"<<edad[i];
        cout<<"\n"<<tiempo[i];
        cout<<"\n\n";

    };system ("pause");break;
}
}while(op!=0);
}


void personal:: equipo2(){
 int op;
do{
  system("cls");
    cout<<"\n\t\t*****REGISTRO DE MANTENIMIENTO*****"<<endl;
    cout<<"\t1. Dar alta "<<endl;
    cout<<"\t2. Ver alta "<<endl;
    cout<<"\t3. Exportar "<<endl;
    cout<<"\t0. Salir "<<endl;
    cout<<"\tSeleccione una Opcion: ";cin>>op;
switch(op){
     case 1:
         system("cls");
    cout<<"Cuantos empleados desea agregar: ";cin>>ne;
    for(int i=0; i<ne; i++){
    cout<<"\nAGREGAR NUEVO "<<endl;
    cout<<"\tId: ";cin>>id[i];
    fflush(stdin);
    cout<<"\tNombre: ";getline(cin,nombre[i]);
    cout<<"\tEdad: ";cin>>edad[i];
    cout<<"\tTiempo en la empresa(anios): ";cin>>tiempo[i];
    }
break;
     case 2:
         system("cls");
    cout<<"\n\t\t\t*****DATOS DE MANTENIMIENTO*****"<<endl;
     for(int i=0; i<ne; i++){
    cout<<"\t\t--------------------------------------------------------"<<endl;
    cout<<"\t\tID:"<<id[i]<<"\t\tNOMBRE:"<<nombre[i]<<"\n\t\tEDAD:"<<edad[i]<<"\t\tTIEMPO EN LA EMPRESA:"<<tiempo[i]<<endl;
    }getch();
break;
 case 3:
    system("cls");
    ofstream guardar ("Mantenimiento.txt");
    for(int i=0;i<ne;i++){
        guardar<<"Elemento "<<i+1<<":\n"<<id[i]<<endl;
        guardar<<nombre[i]<<"\n";
        guardar<<edad[i]<<"\n";
        guardar<<tiempo[i]<<"\n\n";
    }
    guardar.close();
    cout<<"\n\nTus datos han sido guardados en el archivo llamado \"Mantenimiento.txt\" y sus elementos son : \n\n";
    for (int i=0;i<ne;i++){
        cout<<"Elemento "<<i+1<<endl;
        cout<<id[i];
        cout<<"\n"<<nombre[i];
        cout<<"\n"<<edad[i];
        cout<<"\n"<<tiempo[i];
        cout<<"\n\n";

    };system ("pause");break;
    }

}while(op!=0);
}

void personal:: equipo3(){

  int op;
do{
  system("cls");
    cout<<"\n\t\t*****REGISTRO DE LIMPIEZA*****"<<endl;
    cout<<"\t1. Dar alta "<<endl;
    cout<<"\t2. Ver alta "<<endl;
    cout<<"\t3. Exportar "<<endl;
    cout<<"\t0. Salir "<<endl;
    cout<<"\tSeleccione una Opcion: ";cin>>op;
switch(op){
     case 1:
         system("cls");
    cout<<"Cuantos empleados desea agregar: ";cin>>ne;
    for(int i=0; i<ne; i++){
    cout<<"\nAGREGAR NUEVO "<<endl;
    cout<<"\tId: ";cin>>id[i];
    fflush(stdin);
    cout<<"\tNombre: ";getline(cin,nombre[i]);
    cout<<"\tEdad: ";cin>>edad[i];
    cout<<"\tTiempo en la empresa(anios): ";cin>>tiempo[i];
    }
break;
     case 2:
         system("cls");
    cout<<"\n\t\t\t*****DATOS DE LIMPIEZA*****"<<endl;
     for(int i=0; i<ne; i++){
    cout<<"\t\t--------------------------------------------------------"<<endl;
    cout<<"\t\tID:"<<id[i]<<"\t\tNOMBRE:"<<nombre[i]<<"\n\t\tEDAD:"<<edad[i]<<"\t\tTIEMPO EN LA EMPRESA:"<<tiempo[i]<<endl;
    }getch();
break;
 case 3:
    system("cls");
    ofstream guardar ("Limpieza.txt");
    for(int i=0;i<ne;i++){
        guardar<<"Elemento "<<i+1<<":\n"<<id[i]<<endl;
        guardar<<nombre[i]<<"\n";
        guardar<<edad[i]<<"\n";
        guardar<<tiempo[i]<<"\n\n";
    }
    guardar.close();
    cout<<"\n\nTus datos han sido guardados en el archivo llamado \"Limpieza.txt\" y sus elementos son : \n\n";
    for (int i=0;i<ne;i++){
        cout<<"Elemento "<<i+1<<endl;
        cout<<id[i];
        cout<<"\n"<<nombre[i];
        cout<<"\n"<<edad[i];
        cout<<"\n"<<tiempo[i];
        cout<<"\n\n";

    };system ("pause");break;
    }

}while(op!=0);
}
void personal::equipo4(){
int op;
do{
  system("cls");
    cout<<"\n\t\t*****REGISTRO DE SEGURIDAD*****"<<endl;
    cout<<"\t1. Dar alta "<<endl;
    cout<<"\t2. Ver alta "<<endl;
    cout<<"\t3. Exportar "<<endl;
    cout<<"\t0. Salir "<<endl;
    cout<<"\tSeleccione una Opcion: ";cin>>op;
switch(op){
     case 1:
         system("cls");
    cout<<"Cuantos empleados desea agregar: ";cin>>ne;
    for(int i=0; i<ne; i++){
    cout<<"\nAGREGAR NUEVO "<<endl;
    cout<<"\tId: ";cin>>id[i];
    fflush(stdin);
    cout<<"\tNombre: ";getline(cin,nombre[i]);
    cout<<"\tEdad: ";cin>>edad[i];
    cout<<"\tTiempo en la empresa(anios): ";cin>>tiempo[i];
    }
break;
     case 2:
         system("cls");
    cout<<"\n\t\t\t*****DATOS DE SEGURIDAD*****"<<endl;
     for(int i=0; i<ne; i++){
    cout<<"\t\t--------------------------------------------------------"<<endl;
    cout<<"\t\tID:"<<id[i]<<"\t\tNOMBRE:"<<nombre[i]<<"\n\t\tEDAD:"<<edad[i]<<"\t\tTIEMPO EN LA EMPRESA:"<<tiempo[i]<<endl;
    }getch();
break;
 case 3:
    system("cls");
    ofstream guardar ("Seguridad.txt");
    for(int i=0;i<ne;i++){
        guardar<<"Elemento "<<i+1<<":\n"<<id[i]<<endl;
        guardar<<nombre[i]<<"\n";
        guardar<<edad[i]<<"\n";
        guardar<<tiempo[i]<<"\n\n";
    }
    guardar.close();
    cout<<"\n\nTus datos han sido guardados en el archivo llamado \"Seguridad.txt\" y sus elementos son : \n\n";
    for (int i=0;i<ne;i++){
        cout<<"Elemento "<<i+1<<endl;
        cout<<id[i];
        cout<<"\n"<<nombre[i];
        cout<<"\n"<<edad[i];
        cout<<"\n"<<tiempo[i];
        cout<<"\n\n";

    };system ("pause");break;
    }

}while(op!=0);
}

