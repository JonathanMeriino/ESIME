#include <iostream>
#include <windows.h>
using namespace std;

void leer (int &_n){
    cout <<"Dame el valor de los renglones a llenar con * = ";cin>>_n;}
void ver (int _n){
    cout<<"El valor de n = "<<_n<<" \n\n";}
void dibujar (int _n){
    cout <<"\n\n\t\t\t\t";
    for (int j = 0;j<_n;++j){
        for (int i=0;i<_n-j-1;++i)
            cout<<" ";
        for (int i=0;i<2*j+1;++i)
            cout<<"*";
        cout<<endl<<"\t\t\t\t";
        }
        cout<<"\n";
}
main (){
    int n;
    cout<<"\n\t\t Programa que dibuja una figura \n\n";
    leer(n);
    ver(n);
    dibujar(n);
    system("pause");
    }
