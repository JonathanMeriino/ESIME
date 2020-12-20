#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

void valores(int &,int &);
void pares (int &,int &);
void impares(int &,int &);

main(){
    int valx,valy;
    cout<<"\t\t Ejercicio 6 "<<endl;
    valores(valx,valy);
    pares (valx,valy);
    impares(valx,valy);

}

void valores (int &valx,int &valy){
int x,y,val;
x=0; y=0;
    cout<<"\t\t Mostrar valores de X y Y que cumplan la condicion 3x^3 + 2y^2<878"<<endl;
do{
    x++;y++;
    valx = 3*(pow(x,3));
    valy =2*(pow(y,2));
    val = valx + valy;
    if(val<878){
            cout<<"\t3("<<x<<")^3 + 2("<<y<<")^2 = "<<valx<<" + "<<valy<<" = "<<val<<endl;
    }
    }while(val<878);
system("pause");

}
void pares (int &valx,int &valy){
int x,y,val;
x=0; y=0;
cout<<"\t\t Mostrar valores de X y Y que cumplan la condicion 2x^3 + 4y^3<1783"<<endl;
do{
    x++;y++;
    valx = 2*(pow(x,3));
    valy =4*(pow(y,3));
    val = valx + valy;
    if(val<1783 && val%2==0){
            cout<<"\t2("<<x<<")^3 + 4("<<y<<")^3 = "<<valx<<" + "<<valy<<" = "<<val<<"\t El Valor es Par"<<endl;
    }
    }while(val<1783);
system("pause");

}

void impares (int &valx,int &valy){

int x,y,val;
x=0; y=0;
cout<<"\t\t Mostrar valores de X y Y que cumplan la condicion 5x^3 + 2y^2<4783"<<endl;
do{
    x++;y++;
    valx = 5*(pow(x,3));
    valy =2*(pow(y,2));
    val = valx + valy;
    if(val<4783 && val%2==1){
            cout<<"\t5("<<x<<")^3 + 2("<<y<<")^2 = "<<valx<<" + "<<valy<<" = "<<val<<"\t El Valor es impar"<<endl;
    }
    }while(val<4783);
system("pause");

}


