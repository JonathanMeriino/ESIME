#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
void valor_x(int &,int &);
void valor_y(int &,float &);
void valor_z(int &,float &);

main(){
  int z,x,valx,y;
  float valy,valz;
    cout<<"\t\t\n Ejercicio 4"<<endl;
    valor_x(x,valx);
    valor_y(y,valy);
    valor_z(z,valz);
}
void valor_x(int &x,int &valx){
x=0;
cout<<"\t\t\n Muestra los valores de X que cumplen la condicion (x^2*8)-(2x*2)<1334"<<endl;
do{
        x++;
    valx = (pow(x,2)*8)-(2*x*2);
    if(valx<1334){
            cout<<"("<<x<<"^2*8)-(2("<<x<<")-8) = "<<valx<<endl;
    }
    }while(valx<1334);

system ("pause");
}

void valor_y(int &y, float &valy){
y=0;
cout<<"\t\t\n Muestra los valores de Y que cumplen la condicion 2(y^2*3.2)-(2y*2.6)<2013.5"<<endl;
do{
    y++;
    valy = 2*(pow(y,2)*3.2)-(2*y*2.6);
    if(valy<2013.5){
            cout<<"2("<<y<<"^2*3.2)-(2("<<y<<")*2.6) = "<<valy<<endl;
    }
    }while(valy<2013.5);

system ("pause");
}

void valor_z(int &z,float &valz){
z=0;
cout<<"\t\t\n Muestra los valores de Z que cumplen la condicion 1/2(z^3*2)-(1.2z*2.66)<4814.66"<<endl;
do{
    z++;
    valz = (pow(z,3)*2)/2-(1.2*z*2.66);
    if(valz<4814.66){
            cout<<"(("<<z<<"^3)*2)-(1.2("<<z<<")*2.6) = "<<valz<<endl;
    }
    }while(valz<4814.66);

system ("pause");
}

