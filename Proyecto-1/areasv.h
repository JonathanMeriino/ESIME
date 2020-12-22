#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
void cuadrado (int area, int per){
    float x;
    cout<<"\t*Vamos a calcular el area y el perimetro de un cuadrado*\n\n";
    cout<<"Dame el valor de uno de sus lados en cm: ";
    cin>>x;
    area = x*x;
    per = x*4;
    cout<<"\n\nEl area es: "<<area<<" cm^2"<<endl;
    cout<<"El perimetro es: "<<per<<" cm\n"<<endl;
    }

 void triangulo (float x,float y){

    cout<<"\t*Vamos a calcular el area y el perimetro de un triangulo equilatero*\n\n";
    cout<<"Dame el valor de uno de sus lados en cm: ";
    cin>>x;
    cout<<"\nDame el valor de su altura: ";
    cin>>y;
    cout<<"\n\nEl area es: "<<(x*y)/2<<" cm^2"<<endl;
    cout<<"El perimetro es: "<<x*3<<" cm\n"<<endl;
    }
void rectangulo (float x, float y){

    cout<<"\t*Vamos a calcular el area y el perimetro de un rectangulo*\n\n";
    cout<<"Dame el valor de uno de su base en cm: ";
    cin>>x;
    cout<<"\nDame el valor de su altura: ";
    cin>>y;
    cout<<"\n\nEl area es: "<<(x*y)<<" cm^2"<<endl;
    cout<<"El perimetro es: "<<(x*2)+(y*2)<<" cm\n"<<endl;
}
void circulo (float r){

    cout<<"\t*Vamos a calcular el area y el perimetro de un circulo*\n\n";
    cout<<"Dame el valor de su radio: ";
    cin>>r;
    cout<<"\nEl area es: "<<M_PI*(pow(2,r))<<" cm^2"<<endl;
    cout<<"El perimetro es: "<<M_PI*(r*2)<<" cm\n"<<endl;
     }
//Cilindro

void cilindro(float area,float volumen)
{
float RADIO, ALTURA;

cout<<"Dame el radio del cilindro: \n";
cin>>RADIO;
cout<<"Dame la altura del cilindro: \n";
cin>>ALTURA;
area = 2*M_PI*RADIO*ALTURA;
volumen=M_PI*RADIO*RADIO*ALTURA;
cout<<"\n El volumen del cilindro es: "<<volumen<<endl;
cout<<"\n\t El area del cilindro es:"<<area<<endl;

}
//Cono
void cono(float r,float h){

    cout<<"r = "<<endl;
    cin>>r;
    cout<<"h = "<<endl;
    cin>>h;
    cout<<"Volumen es: "<< M_PI*r*r*h*1/3<<endl;

}
//Esfera
void esfera(float &_rad){
	cout<<"Introduce el radio de la esfera\n";
	cout<<_rad;

	cout<<"\n\nEl volumen de la esfera de radio:"<<_rad<<" es: "<<4/3*M_PI*_rad*_rad*_rad<<endl;
	cout<<"\n\nEl area de la esfera de radio:"<<_rad<<" es:"<<4*M_PI*_rad*_rad<<endl;

}
