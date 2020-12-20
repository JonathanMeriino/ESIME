#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
void leer(char []);
void ver(char []);
int num[50],n=0,valor=0;
main(){
    char r[50];
    leer(r);
    ver(r);}
void leer(char r[50]){
    unsigned char rom;
    cout<<"\t\t\n Ejercicio 1"<<endl;
    cout<<"\tDigite un numero romano: ";
   while(rom!=13){
        rom=_getch();
        if(rom!=13){
            r[n]=rom;
            cout<<rom;
            n++;}}}
void ver(char r[50])
{
    if(r[0]=='O')
        {
    cout<<"\n\nFin del programa.\n\n";
    }
    else{
    for(int i=0;i<n;i++){
        if(toupper(r[i])=='M'||toupper(r[i])=='D'||toupper(r[i])=='C'||toupper(r[i])=='L'||toupper(r[i])=='X'||toupper(r[i])=='V'||toupper(r[i])=='I'){
        switch(r[i]){
            case 'I': num[i]=1; break;
            case 'V': num[i]=5; break;
            case 'X': num[i]=10; break;
            case 'L': num[i]=50; break;
            case 'C': num[i]=100; break;
            case 'D': num[i]=500; break;
            case 'M': num[i]=1000; break;}
        }else{valor=1;}}
    cout<<"\n\n";
    if(valor!=1){
    for(int j=0;j<n;j++){
    cout<<r[j]<<" = "<<num[j]<<endl;
    }}else{cout<<"El numero ingresado no es valido.\n\n"; }}}
