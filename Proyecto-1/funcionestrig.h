#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<math.h>

using namespace std;
//Seno

void seno(float p,float resul)
           {
          cout<<"Introduce el valor al que deseas sacarle seno: ";
           cin>>p;
           resul= sin(p*M_PI/180);
           cout<<"El seno de "<<p<<" es: "<<resul<<endl;

           }

     //Coseno
     void coseno(float p,float resul)
     {
           cout<<"Introduce el valor al que deseas sacarle coseno: ";
           cin>>p;
           resul=cos(p*M_PI/180);
           cout<<"El coseno de "<<p<<"es: "<<resul<<endl;

           }

	//Tangente
     void tangente(float p,float resul)
     {
           cout<<"Introduce el valor al que deseas sacarle Tangente: ";
           cin>>p;
           resul=tan(p*M_PI/180);
           cout<<"La tangente de" <<p<<" es: "<<resul<<endl;

           }
     //Secante
     void secante(float p,float resul)
     {
           cout<<"Introduce el valor al que deseas sacarle secante: \n";
           cin>>p;
           resul=1/cos(p*M_PI/180);
           cout<<"La secante de "<<p<<" es: "<<resul<<endl;;

           }
     //Cosecante
     void cosecante (float p,float resul)
     {
           cout<<"Introduce el valor al que deseas sacarle cosecante: \n";
           cin>>p;
           resul=1/sin(p*M_PI/180);
           cout<<"El cosecante de" <<p<<" es: "<<resul<<endl;

           }
     //Cotangete
     void cotangente(float p,float resul)
     {
           cout<<"Introduce el valor al que deseas sacarle cotangente: \n";
           cin>>p;
           resul=1/tan(p*M_PI/180);
           cout<<"La cotangente de" <<p<<" es: "<<resul<<endl;

           }
