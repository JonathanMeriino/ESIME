//Programa que dibuja un triangulo rectangulo
#include <iostream>
#include <stdlib.h>
using namespace std;

void leer(int &_no_renglones){             //La funcion lee el numero de renglones que tendra el triangulo rectangulo
cout<<"Valor de los renglones a llenar con * = ";
cin>>_no_renglones;
}
void ver(int _no_renglones){
cout<<"El valor de n = "<<_no_renglones<<endl;
}
void dibujar(int _no_renglones){
cout<<"\n\n\t\t\t\t";
   for (int j=0;j<_no_renglones;j++){
       for (int i=0;i<_no_renglones-j-1;i++)
             cout<<"  ";
            for (int i=0;i<2*j+1;i++)
                cout<<"*";
              cout<<endl<<"\t\t\t\t";
    }
}
main(){
int n;
cout<<"\n\t\t Programa que dibuja una figura\n\n";
leer(n);
ver (n);
dibujar(n);
system ("pause");
}
