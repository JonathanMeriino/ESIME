#include <iostream>
#include <stdlib.h>
using namespace std;
void leer(int &);
void ver(int );
void convertir(int );
main (){
 int num;
 char O = 0;
do{
    leer(num);
    ver(num);
    convertir(num);
    system("pause");
    system("cls");
    }while(num!=0);}
void leer(int &num){

    cout<<"Ingresa un numero decimal: ";
    cin>>num;}
void ver(int num){

    char *unidad[] = {"","1","2","3","4","5","6","7","8","9"};

    char *decenas[] = {"","10","20","30","40","50", "60","70","80","90"};
    char *centena[] = {"","100","200","300","400","500","600","700","800","900"};
     char *millar[] = {"","1000","2000","3000"};
    int mil=num%10000/1000;
    int cen=num%1000/100;
    int de=num%100/10;
    int un=num%10;

    if(mil>1 && un>0){cout<<millar[mil];}
    if(mil>1 && un>0){cout<<("\t");}
if(cen>1 && un>0){cout<<centena[cen];}
 if(cen>1 && un>0){cout<<("\t");}
if (de>1){ cout<<decenas[de];}
 if(de>1 && un>0){cout<<("\t");}


if(de!=1 && un>0){cout<<unidad[un];}



cout<<endl;}
void convertir(int num){

    char *unidad[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};

    char *decenas[] = {"","X","XX","XXX","XXXX","XL", "LX","LXX","LXXX","XC"};
    char *centena[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    char *millar[] = {"","M","MM","MMM"};
    int mil=num%10000/1000;
    int cen=num%1000/100;
    int de=num%100/10;
    int un=num%10;
 if(mil>1 && un>0){cout<<millar[mil];}
    if(mil>1 && un>0){cout<<("\t");}
if(cen>1 && un>0){cout<<centena[cen];}
 if(cen>1 && un>0){cout<<("\t");}
if (de>1){ cout<<decenas[de];}
 if(de>1 && un>0){cout<<("\t");}


if(de!=1 && un>0){cout<<unidad[un];}

cout<<endl;}
