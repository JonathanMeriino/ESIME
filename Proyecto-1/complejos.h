#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<math.h>

using namespace std;

void leer(float N[]){
   cout<<"\n\tComplejo A: ";
   cout<<"\n\tParte real: ";
   cin>>N[0];
   cout<<"\tParte imaginaria: ";
   cin>>N[1];
}
void ver(float N[]){
   cout<<"\n\tLeyendo valores"<<endl;
   cout<<"\n\tComplejo A:"<<endl;
   cout<<"\n\t"<<N[0]<<" + "<<N[1]<<"i"<<endl;
  // cout<<"\n\n\tComplejo B:"<<endl;
    //cout<<"\n\t"<<N1[0]<<" + "<<N2[1]<<"i"<<endl;
}
void sumar(float N1[],float N2[]){
   cout<<"\n\tOpcion Sumar"
						<<"\n\tLa suma de A+B es:"
						<<"\n\t"<<N1[0]<<"+"<<N2[0]<<" = "<<N1[0]+N2[0]
						<<"\n\t"<<N1[1]<<"+"<<N2[1]<<" = "<<N1[1]+N2[1]<<endl
						<<"\n\tC = "<<N1[0]+N2[0]<<"+"<<N1[1]+N2[1]<<"i"<<endl;
}
void restar(float N1[], float N2[]){
   cout<<"\n\tOpcion Restar"
						<<"\n\tLa resta de A-B es:"
						<<"\n\t"<<N1[0]<<"-"<<N2[0]<<" = "<<N1[0]-N2[0]
						<<"\n\t"<<N1[1]<<"-"<<N1[1]<<" = "<<N1[1]-N2[1]<<endl
					<<"\n\tC = "<<N1[0]-N2[0]<<"-"<<N1[1]-N2[1]<<"i"<<endl<<endl;
}
void multiplicar(float N1[], float N2[]){
    cout<<"\n\tOpcion Multiplicar"
						<<"\n\tLa multiplicacion de (A)(B) es:"
						<<"\n\tC = "<<N1[0]*N2[0]-N1[1]*N2[1]
						<<" + "<<N1[0]*N2[1]+N1[1]*N2[0]<<"i\n\n";
}
