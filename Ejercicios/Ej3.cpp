#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
int rom_dec(char []);
main(){
    char cad[20];
    int decimal,op;
do{
cout<<"\t\t\n\n *****Escribe el numero en Romano o pulse O para salir***** "<<endl;;
cout<<"\t\t\tRespuesta: ";
cin>>cad;

decimal=rom_dec(cad);
cout<<"El valor decimal es: "<<decimal<<endl;
}while(op!='O');

}
int rom_dec(char s[]){

int valor;
int r=0;
for (int i=0;i<strlen(s);i++){
    switch(s[i]){
    case 'I': valor=1;break;
    case 'V': valor=5;break;
    case 'X': valor=10;break;
    case 'L': valor=50;break;
    case 'C': valor=100;break;
    case 'D': valor=500;break;
    case 'M': valor=1000;break;
    case 'O': system("cls");
     cout<<"\t\t\n\nFin del programa"<<endl;
     system("cls");
    default: break;


        }
    r+=valor;

}
return r;
}
