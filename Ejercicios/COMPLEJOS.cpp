#include <iostream>
#include <stdlib.h>

using namespace std;

void Menu (void);

int main (void)
{
float complexA [2];
float complexB [2];
int Opc;

for(int i=0;i<2;i++)
{
complexA[i]=0;
complexB[i]=0;
}

do{
system("cls");
Menu();
cout<<"\n\tIngresa una opcion: ";
cin>>Opc;
switch(Opc)
{
case 1:
system("cls");
cout<<"\n\n\tLeyendo valores";
cout<<"\n\tComplejo A: ";
cout<<"\n\tParte real: ";
cin>>complexA[0];
cout<<"\tParte imaginaria: ";
cin>>complexA[1];

cout<<"\n\tComplejo B: ";
cout<<"\n\tParte real: ";
cin>>complexB[0];
cout<<"\tParte imaginaria: ";
cin>>complexB[1];

break;

case 2:
system("cls");
cout<<"\n\tLeyendo valores"
<<"\n\tComplejo A:"
<<"\n\t"<<complexA[0]<<" + "<<complexA[1]<<"i"
<<"\n\n\tComplejo B:"
<<"\n\t"<<complexB[0]<<" + "<<complexB[1]<<"i"<<endl;

system("pause");
break;

case 3:
system("cls");
cout<<"\n\tOpcion Sumar"
<<"\n\tLa suma de A+B es:"
<<"\n\t"<<complexA[0]<<"+"<<complexB[0]<<" = "<<complexA[0]+complexB[0]
<<"\n\t"<<complexA[1]<<"+"<<complexB[1]<<" = "<<complexA[1]+complexB[1]<<endl
<<"\n\tC = "<<complexA[0]+complexB[0]<<"+"<<complexA[1]+complexB[1]<<"i"<<endl<<endl;
system("pause");
break;

case 4:
system("cls");
cout<<"\n\tOpcion Restar"
<<"\n\tLa resta de A-B es:"
<<"\n\t"<<complexA[0]<<"-"<<complexB[0]<<" = "<<complexA[0]-complexB[0]
<<"\n\t"<<complexA[1]<<"-"<<complexB[1]<<" = "<<complexA[1]-complexB[1]<<endl
<<"\n\tC = "<<complexA[0]-complexB[0]<<"-"<<complexA[1]-complexB[1]<<"i"<<endl<<endl;
system("pause");
break;

case 5:
system("cls");
cout<<"\n\tOpcion Multiplicar"
<<"\n\tLa multiplicacion de (A)(B) es:"
<<"\n\tC = "<<complexA[0]*complexB[0]-complexA[1]*complexB[1]
<<" + "<<complexA[0]*complexB[1]+complexA[1]*complexB[0]<<"i\n\n";
system("pause");
break;

case 0:
system("cls");
cout<<"\n\n\tSaliendo del programa... Gracias\n\n";
system("pause");
break;
}
}while(Opc!=0);

return 1;
}

void Menu (void)
{
cout<<"\n\n\t[1] Leer"
<<"\n\t[2] Ver"
<<"\n\t[3] Sumar"
<<"\n\t[4] Restar"
<<"\n\t[5] Multiplicar"
<<"\n\n\n\t[0] Salir";

}
