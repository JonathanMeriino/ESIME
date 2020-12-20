#include <iostream>
#include <stdlib.h>
using namespace std;

void leer(int &_n){
cout<<"Dame el valor de n:";
cin>>_n;
}
void ver(int _n){
cout<<"El valor de n es: "<<_n<<endl;
system("pause ");
}
void validar(int _n){
int i=1;
while (i<=_n){
    if ((i%_n)==0){
        i++;
    }

    }
    cout<<"salida = "<<i<<endl;
}
main(){
int n;
leer(n);
ver(n);
validar(n);
system ("pause");
}
