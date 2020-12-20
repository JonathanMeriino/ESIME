#include<iostream>
using namespace std;
void leer(int &);
void ver(int );
void leer(float *,int );  // sobrecarga de funcion leer
void ver(float *, int);   // sobrecarga de funcion ver

main(){
    int numeros;
    float *tabla;
    tabla=new float;
    cout<<"\t\t Hacer un programa que lea N numeros reales \n\n";
    leer(numeros);
    tabla=new float[numeros];
    leer(tabla,numeros);
    cout<<"   Numeros guardados ";;
    ver(tabla,numeros);
}
void leer(int &n){  // paso por referencia o alias
    cout<<"cuantos numeros deseas guardar : ";cin>>n;}

void leer(float *t, int n){
    for(int i=0; i<n; i++){
        cout<<" Valor "<<i<<" = ";
        cin>>t[i];}}
void ver(float n){   // paso por valor o copia
    cout<<"cuantos numeros deseas guardar : ";cin>>n;}

void ver(float *t, int n){
    for(int i=0; i<n; i++){
        cout<<" Valor "<<i<<" = "<<t[i]<<endl;}}

