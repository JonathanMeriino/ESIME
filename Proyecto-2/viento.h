#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>

using namespace std;
struct datos2{
        int serie;
        string marca;
        float precio;

     };
datos2 *flautas;
datos2 *trompetas;
datos2 *saxofones;

void flauta(datos2 *flautas){
    int op,na;
    flautas = new datos2[na];
    do{
    system("cls");
    cout<<"\n\t\tINVENTARIO FLAUTAS"<<endl;
    cout<<"\t1. Dar de alta"<<endl;
    cout<<"\t3. Ver elementos "<<endl;
    cout<<"\t4. Exportar"<<endl;
    cout<<"\t0. Salir " <<endl;
    cout<<"Seleccione una opcion: ";cin>>op;
 switch (op){

case 1 :
   cout<<"\t\t*****DAR ALTA ELEMENTOS*****"<<endl;
    cout<<"\nCuantos elementos desea ingresar: "; cin>>na;
    for(int i=0;i<na;i++) {
    cout<<"INGRESA NUEVO ELEMENTO"<<endl;
    cout<<"Serie: ";cin>>flautas[i].serie;
    fflush(stdin);
    cout<<"Marca: ";getline(cin,flautas[i].marca);
    cout<<"Precio: ";cin>>flautas[i].precio;

    }
    break;


    case 2:
           cout<<"\n\t\t\t\tTODOS LOS ELEMENTOS AGREGADOS\n"<<endl;
    cout<<"\tNo. Serie\t\tMarca\t\tPrecio\t\t "<<endl;
    cout<<"\t------------------------------------------------------------------------"<<endl;
        for(int i=0;i<na;i++) {
    cout<<"\t\t"<<flautas[i].serie<<"\t\t"<<"\t\t"<<flautas[i].marca<<"\t\t"<<flautas[i].precio<<endl;
        }system ("pause");break;



    case 3:
        ofstream guardar ("Flautas.txt");
    for(int i=0;i<na;i++){
        guardar<<"Elemento "<<i+1<<":\n"<<flautas[i].serie <<endl;
        guardar<<flautas[i].marca<<"\n";
        guardar<<flautas[i].precio<<"\n\n";
    }
    guardar.close();
    cout<<"\n\nTus datos han sido guardados en el archivo llamado \"Flautas.txt\" y sus elementos son : \n\n";
    for (int i=0;i<na;i++){
        cout<<"Elemento "<<i+1<<endl;
        cout<<flautas[i].serie;
        cout<<"\n"<<flautas[i].marca;
        cout<<"\n"<<flautas[i].precio;
        cout<<"\n\n";

    };system ("pause");break;

     }
}while(op!=0);

 }
void trompeta(datos2 *trompetas){
    int op,na;
    trompetas = new datos2[na];
    do{
    system("cls");
    cout<<"\n\t\tINVENTARIO TROMPETAS"<<endl;
    cout<<"\t1. Dar de alta"<<endl;
    cout<<"\t2. Ver elementos "<<endl;
    cout<<"\t3. Exportar"<<endl;
    cout<<"\t0. Salir " <<endl;
    cout<<"Seleccione una opcion: ";cin>>op;
 system("cls");
    switch (op){

    case 1 :
    cout<<"\t\t*****DAR ALTA ELEMENTOS*****"<<endl;
    cout<<"\nCuantos elementos desea ingresar: "; cin>>na;
    for(int i=0;i<na;i++) {
    cout<<"INGRESA NUEVO ELEMENTO"<<endl;
    cout<<"Serie: ";cin>>trompetas[i].serie;
    fflush(stdin);
    cout<<"Marca: ";getline(cin,trompetas[i].marca);
    cout<<"Precio: ";cin>>trompetas[i].precio;

    }

break;
    case 2:
    cout<<"\n\t\t\t\tTODOS LOS ELEMENTOS AGREGADOS\n"<<endl;
    cout<<"\tNo. Serie\t\tMarca\t\tPrecio\t\t "<<endl;
    cout<<"\t------------------------------------------------------------------------"<<endl;
        for(int i=0;i<na;i++) {
    cout<<"\t\t"<<trompetas[i].serie<<"\t\t"<<"\t\t"<<trompetas[i].marca<<"\t\t"<<trompetas[i].precio<<endl;
}
system ("pause");
break;

    case 3: ofstream guardar ("Trompetas.txt");
    for(int i=0;i<na;i++){
        guardar<<"Elemento "<<i+1<<":\n"<<trompetas[i].serie <<endl;
        guardar<<trompetas[i].marca<<"\n";
        guardar<<trompetas[i].precio<<"\n\n";
    }
    guardar.close();
    cout<<"\n\nTus datos han sido guardados en el archivo llamado \"Trompetas.txt\" y sus elementos son : \n\n";
    for (int i=0;i<na;i++){
        cout<<"Elemento "<<i+1<<endl;
        cout<<trompetas[i].serie;
        cout<<"\n"<<trompetas[i].marca;
        cout<<"\n"<<trompetas[i].precio;
        cout<<"\n\n";

    };system ("pause");break;

    }
}while(op!=0);
}
 void saxofon(datos2 *saxofones){
    int op,na;
    saxofones = new datos2[na];
    do{
    system("cls");
    cout<<"\n\t\tINVENTARIO SAXOFON"<<endl;
    cout<<"\t1. Dar de alta"<<endl;
    cout<<"\t2. Ver elementos "<<endl;
    cout<<"\t3. Exportar"<<endl;
    cout<<"\t0. Salir " <<endl;
    cout<<"Seleccione una opcion: ";cin>>op;
 switch (op){
    case 1 :
   cout<<"\t\t*****DAR ALTA ELEMENTOS*****"<<endl;
    cout<<"\nCuantos elementos desea ingresar: "; cin>>na;
    for(int i=0;i<na;i++) {
    cout<<"INGRESA NUEVO ELEMENTO"<<endl;
    cout<<"Serie: ";cin>>saxofones[i].serie;
    fflush(stdin);
    cout<<"Marca: ";getline(cin,saxofones[i].marca);
    cout<<"Precio: ";cin>>saxofones[i].precio;

    }
    break;

    case 2:
           cout<<"\n\t\t\t\tTODOS LOS ELEMENTOS AGREGADOS\n"<<endl;
    cout<<"\tNo. Serie\t\tMarca\t\tPrecio\t\t "<<endl;
    cout<<"\t------------------------------------------------------------------------"<<endl;
        for(int i=0;i<na;i++) {
    cout<<"\t\t"<<saxofones[i].serie<<"\t\t"<<"\t\t"<<saxofones[i].marca<<"\t\t"<<saxofones[i].precio<<endl;
        }system ("pause");
    break;



    case 3: ofstream guardar ("Saxofones.txt");
    for(int i=0;i<na;i++){
        guardar<<"Elemento "<<i+1<<":\n"<<saxofones[i].serie <<endl;
        guardar<<saxofones[i].marca<<"\n";
        guardar<<saxofones[i].precio<<"\n\n";
    }
    guardar.close();
    cout<<"\n\nTus datos han sido guardados en el archivo llamado \"Saxofones.txt\" y sus elementos son : \n\n";
    for (int i=0;i<na;i++){
        cout<<"Elemento "<<i+1<<endl;
        cout<<saxofones[i].serie;
        cout<<"\n"<<saxofones[i].marca;
        cout<<"\n"<<saxofones[i].precio;
        cout<<"\n\n";

    };system ("pause");break;

     }
}while(op!=0);
}

