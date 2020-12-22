#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>
using namespace std;
struct datos{
        int serie;
        string marca;
        float precio;

     };
datos *guitarras;
datos *bajos;
datos *violines;

 void guitarra(datos *guitarras){
 int op,na;
guitarras = new datos[na];

   do{
    system ("cls"); //borra el menu que te permite escoger entre bajos,gitarras ,etc.
    cout<<"\n\t\tINVENTARIO GUITARRAS"<<endl;
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
    cout<<"\nINGRESA NUEVO ELEMENTO"<<endl;
    cout<<"\tSerie: ";cin>>guitarras[i].serie;
    fflush(stdin);
    cout<<"\tMarca: ";getline(cin,guitarras[i].marca);
    cout<<"\tPrecio: ";cin>>guitarras[i].precio;

    }

break;


    case 2:
    cout<<"\n\t\t\t\tTODOS LOS ELEMENTOS AGREGADOS\n"<<endl;
    cout<<"\tNo. Serie\t\tMarca\t\tPrecio\t\t "<<endl;
    cout<<"\t--------------------------------------------------------"<<endl;
        for(int i=0;i<na;i++) {
    cout<<"\t"<<guitarras[i].serie<<"                    "<<guitarras[i].marca<<"             "<<guitarras[i].precio<<endl;
}
system ("pause");
break;

    case 3: ofstream guardar ("Guitarras.txt");
    for(int i=0;i<na;i++){
        guardar<<"Elemento "<<i+1<<":\n"<<guitarras[i].serie <<endl;
        guardar<<guitarras[i].marca<<"\n";
        guardar<<guitarras[i].precio<<"\n\n";
    }
    guardar.close();
    cout<<"\n\nTus datos han sido guardados en el archivo llamado \"Guitarras.txt\" y sus elementos son : \n\n";
    for (int i=0;i<na;i++){
        cout<<"Elemento "<<i+1<<endl;
        cout<<guitarras[i].serie;
        cout<<"\n"<<guitarras[i].marca;
        cout<<"\n"<<guitarras[i].precio;
        cout<<"\n\n";

    };system ("pause");break;
}
}while(op!=0);
}

void bajo(datos *bajos){
int op,na;
bajos = new datos[na];
    do{
    system("cls");
    cout<<"\n\t\tINVENTARIO BAJOTRASTOS"<<endl;
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
    cout<<"Serie: ";cin>>bajos[i].serie;
    fflush(stdin);
    cout<<"Marca: ";getline(cin,bajos[i].marca);
    cout<<"Precio: ";cin>>bajos[i].precio;

    }
    break;


    case 2:
           cout<<"\n\t\t\t\tTODOS LOS ELEMENTOS AGREGADOS\n"<<endl;
    cout<<"\tNo. Serie\t\tMarca\t\tPrecio\t\t "<<endl;
    cout<<"\t------------------------------------------------------------------------"<<endl;
        for(int i=0;i<na;i++) {
    cout<<"\t\t"<<bajos[i].serie<<"\t\t"<<"\t\t"<<bajos[i].marca<<"\t\t"<<bajos[i].precio<<endl;
        }system ("pause");
    break;

    case 3:
    ofstream guardar ("Bajos.txt");
    for(int i=0;i<na;i++){
        guardar<<"Elemento "<<i+1<<":\n"<<bajos[i].serie <<endl;
        guardar<<bajos[i].marca<<"\n";
        guardar<<bajos[i].precio<<"\n\n";
    }
    guardar.close();
    cout<<"\n\nTus datos han sido guardados en el archivo llamado \"Bajos.txt\" y sus elementos son : \n\n";
    for (int i=0;i<na;i++){
        cout<<"Elemento "<<i+1<<endl;
        cout<<bajos[i].serie;
        cout<<"\n"<<bajos[i].marca;
        cout<<"\n"<<bajos[i].precio;
        cout<<"\n\n";

    };system ("pause");break;

    }
     }while(op!=0);
}


void violin(datos *violines){
    int op,na;
violines = new datos[na];
do{
    system("cls");
    cout<<"\n\t\tINVENTARIO VIOLINES"<<endl;
    cout<<"\t1. Dar de alta"<<endl;
    cout<<"\t2. Ver elementos "<<endl;
    cout<<"\t3. Exportar"<<endl;
    cout<<"\t0. Salir " <<endl;
    cout<<"Seleccione una opcion: ";cin>>op;

    switch(op){
        case 1 :
   cout<<"\t\t*****DAR ALTA ELEMENTOS*****"<<endl;
    cout<<"\nCuantos elementos desea ingresar: "; cin>>na;

    for(int i=0;i<na;i++){
    cout<<"INGRESA NUEVO ELEMENTO"<<endl;
    cout<<"Serie: ";cin>>violines[i].serie;
    fflush(stdin);
    cout<<"Marca: ";getline(cin,violines[i].marca);
    cout<<"Precio: ";cin>>violines[i].precio; }

    break;


    case 2:
    cout<<"\n\t\t\t\tTODOS LOS ELEMENTOS AGREDADOS\n"<<endl;
    cout<<"\tNo. Serie\t\tMarca\t\tPrecio\t\t "<<endl;
    cout<<"\t------------------------------------------------------------------------"<<endl;
    for(int i=0;i<na;i++) {
    cout<<"\t\t"<<violines[i].serie<<"\t\t"<<"\t\t"<<violines[i].marca<<"\t\t"<<violines[i].precio<<endl;};break;

    case 3: ofstream guardar ("Violines.txt");
    for(int i=0;i<na;i++){
        guardar<<"Elemento "<<i+1<<":\n"<<violines[i].serie <<endl;
        guardar<<violines[i].marca<<"\n";
        guardar<<violines[i].precio<<"\n\n";
    }
    guardar.close();
    cout<<"\n\nTus datos han sido guardados en el archivo llamado \"Violines.txt\" y sus elementos son : \n\n";
    for (int i=0;i<na;i++){
        cout<<"Elemento "<<i+1<<endl;
        cout<<violines[i].serie;
        cout<<"\n"<<violines[i].marca;
        cout<<"\n"<<violines[i].precio;
        cout<<"\n\n";

    };system ("pause");break;

    }
}while(op!=0);
}

