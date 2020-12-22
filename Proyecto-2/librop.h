#include<iostream>
#include<stdlib.h>
#include<windows.h>

using namespace std;

void libro(){
    int op;
    system("cls");
    cout<<"\n\t\tLIBROS DE MUSICA\n"<<endl;
    cout<<"SELECCIONA EL LIBRO AL QUE QUIERES ACCEDER"<<endl;
    cout<<"\t1. La musica en latinoamerica"<<endl;
    cout<<"\t2. Lenguaje Musical basico"<<endl;
    cout<<"\t3. Curso completo de la teoria de la musica "<<endl;
    cout<<"\t4. Educacion musical "<<endl;
    cout<<"\t5. Guia Rec "<<endl;
    cout<<"\t6. Manual de la guitarra "<<endl;
    cout<<"\t7. Leyes musicales "<<endl;
    cout<<"\t8. Teoria de la musica "<<endl;
    cout<<"\t0. Salir " <<endl;
    cout<<"Esperando tu respuesta: ";cin>>op;
 switch(op){
case 1:
    system("cls");
    cout<<"\n\t*****Escogiste el Libro: La musica en latinoamerica*****"<<endl;
    cout<<"\n\tAutor: Ricardo Miranda Aurelio Tello"<<endl;
    Sleep(5000);
    system("Libro1.pdf");
    break;
case 2:
    system("cls");
    cout<<"\n\t*****Escogiste el Libro: Lenguaje Musical basico*****"<<endl;
     cout<<"\n\tAutor: Ricardo Miranda Aurelio Tello"<<endl;
    Sleep(5000);
    system("Libro2.pdf");
    break;
case 3:
    system("cls");
    cout<<"\n\t*****Escogiste el Libro: Curso completo de la teoria de la musica*****"<<endl;
     cout<<"\n\tAutor: Vanesa Cordantonopulos"<<endl;
    Sleep(5000);
    system("Libro3.pdf");
    break;
case 4:
    system("cls");
    cout<<"\n\t*****Escogiste el Libro: Educacion musical*****"<<endl;
     cout<<"\n\tAutor: CEIP PINTOR LAXEIRO"<<endl;
    Sleep(5000);
    system("Libro4.pdf");
    break;
case 5:
    system("cls");
    cout<<"\n\t*****Escogiste el Libro:Guia Rec"<<endl;
     cout<<"\n\tAutor: Cultura Argentina"<<endl;
    Sleep(5000);
    system("Libro5.pdf");
    break;
case 6:
    system("cls");
    cout<<"\n\t*****Escogiste el Libro: Manual de la guitarra*****"<<endl;
     cout<<"\n\tAutor: Jose Luis Ruiz del Puerto Valencia"<<endl;
    Sleep(5000);
    system("Libro6.pdf");
    break;
case 7:
    system("cls");
    cout<<"\n\t*****Escogiste el Libro: Leyes musicales*****"<<endl;
     cout<<"\n\tAutor: Nora Pandol"<<endl;
    Sleep(5000);
    system("Libro7.pdf");
    break;
case 8:
    system("cls");
    cout<<"\n\t*****Escogiste el Libro: Teorita de la musica*****"<<endl;
     cout<<"\n\tAutor: Adolphe Danhauser"<<endl;
    Sleep(5000);
    system("Libro8.pdf");
    break;
case 0:cout<<" Saliendo ... \n";Sleep(1000);
    break;
default: cout<<"Tu opcion no existe";
 }

 }
void parti(){
   int op;
    system("cls");
    cout<<"\n\t\tPARTITURAS MUSICALES\n"<<endl;
    cout<<"\t1. Guitarra"<<endl;
    cout<<"\t2. Piano"<<endl;
    cout<<"\t0. Salir " <<endl;
    cout<<"Seleccione una opcion: ";cin>>op;

     switch(op){
case 1:system("cls");
    cout<<"\n\t*****Escogiste la opcion Guitarra*****\n"<<endl;
    cout<<"SELECCIONA LA PARTITURA QUE QUIERES VER\n"<<endl;
    cout<<"\t1. Stairway"<<endl;
    cout<<"\t2. Unter-uns"<<endl;
    cout<<"\t3. Zoff"<<endl;
    cout<<"\t4. Fingerspiel "<<endl;
    cout<<"\t5. Last blues "<<endl;
    cout<<"\t0. Salir " <<endl;
    cout<<"Esperando tu respuesta ";cin>>op;
    	switch(op){
    case 1:	cout<<"\n\t*****Escogiste Stairtway to Heaven*****"<<endl;
    Sleep(5000);
    system("Parti1.pdf");break;
    case 2:	cout<<"\n\t*****Escogiste Unter Uns*****"<<endl;
    Sleep(5000);
    system("Parti2.pdf");break;
    case 3:	cout<<"\n\t*****Escogiste Zoff*****"<<endl;
    Sleep(5000);
    system("Parti3.pdf");break;
    case 4:	cout<<"\n\t*****Escogiste FingersPiel*****"<<endl;
    Sleep(5000);
    system("Parti4.pdf");break;
    case 5:	cout<<"\n\t*****Escogiste la opcion last blues*****"<<endl;
    Sleep(5000);break;
    system("Parti5.pdf");
case 0:cout<<" Saliendo ... \n";Sleep(1000);
    default:cout<<"la opcion ingresada no es valida";break;
    	}
case 2: system("cls");
    cout<<"\n\t*****Escogiste la opcion Piano*****\n"<<endl;
    cout<<"SELECCIONA LA PARTITURA QUE QUIERES VER\n"<<endl;
     cout<<"\t1. Lilium"<<endl;
    cout<<"\t2. 7 years"<<endl;
    cout<<"\t3. Cheque al portaamor "<<endl;
    cout<<"\t4. Scientist "<<endl;
    cout<<"\t5. When i was your men "<<endl;
    cout<<"\t0. Salir " <<endl;
    cout<<"Esperando tu respuesta ";cin>>op;
    switch(op){
     case 1:cout<<"\n\t*****Escogiste Lilium*****"<<endl;
    Sleep(5000);
    system("Parti6.pdf");break;
    case 2:	cout<<"\n\t*****Escogiste 7 years*****"<<endl;
    Sleep(5000);
    system("Parti7.pdf");break;
    case 3:	cout<<"\n\t*****Escogiste Cheque al porta amor*****"<<endl;
    Sleep(5000);
    system("Parti8.pdf");break;
    case 4:	cout<<"\n\t*****Escogiste Scientist*****"<<endl;
    Sleep(5000);
    system("Parti9.pdf");break;
    case 5:	cout<<"\n\t*****Escogiste la opcion When i was your man*****"<<endl;
    Sleep(5000);break;
    system("Parti10.pdf");
case 0:cout<<" Saliendo ... \n";Sleep(1000);
break;
    default:cout<<"la opcion ingresada no es valida";break;

 }
 }
}
