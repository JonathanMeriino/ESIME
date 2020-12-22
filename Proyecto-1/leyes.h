#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
using namespace std;

void leer(float &_I, float &_R){
	cout<<"Valor de I - Intensidad  : "; cin>>_I;
	cout<<"Valor de R - Resistencia : "; cin>>_R;   }
void ver(float _I, float  _R){
	cout<<"Valor de I : "<<_I<<endl;
	cout<<"Valor de R : "<<_R<<endl;  }
float calcular_voltaje(float _I, float  _R){
float V;
V=_I*_R;
	cout<<"\n Dada la Intencidad = "<<_I<<" y la Resitencia = "<<_R
	    <<"\n El Voltaje es = "<<V<<endl;
}
