//Benitez Merino Leonardo Jonathan - 1CV1
#include <iostream>
#include <stdlib.h>
using namespace std;
void leer (int &n);
void leer_au(int [],int);
int ver(int [],int);
int orden(int [],int);
main(){
 int edad[100],j,n,ord;
 cout<<"\t\t Excursionistas"<<endl;
 leer (n);
 leer_au(edad,n);
 ver (edad,n);
 orden(edad,n);
}
void leer (int &n){
cout<<"Numero de excursionistas  ";
cin>>n;

}
void leer_au(int edad[],int n){

    for(int i=0;i<n;i++){
        cout<<"\nDame la edad de las personas ";
        cin>>edad[i]; }
}
int ver (int edad[],int n){
    cout<<"\n\t Impresion de las edades capturadas"<<endl;
    for(int i=0;i<n;i++){

    cout<<"Posicion "<<i<<" = "<<edad[i]<<endl;
    }
    system("pause");
}
int orden(int edad[],int n){
    int ord;
    cout<<"\n\tNumeros ordenados de menor a mayor"<<endl;
    for (int i=0; i<n;i++)
        {
        for (int j=i+1 ;j<n ;j++)
        {
            if(edad[i]<edad[j])
            {
              ord=edad[i];
              edad[i]=edad[j];
              edad[j]=ord;
            }
        }
    }
for (int i=0;i<n;i++)
{
     cout<<"Posicion "<<i<<" = "<<edad[i]<<endl;
}
cout<< "Los encargados del dinero seran lo de la edad" << edad[0]<< " y " << edad[1]<<endl;
}


