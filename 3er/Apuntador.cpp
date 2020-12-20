#include <iostream>
using namespace std;

main(){

    int x;
    int *apx;

    cout<<"Valor de x"<<x<<endl;
    cout<<"Valor de apx"<<apx<<endl;
    x=5;

    apx= &x;
    cout<<"Valor de x: "<<x<<endl;
    cout<<"Valor de apx: "<<apx<<endl;
    cout<<"Valor contenido en apx: "<<*apx<<endl;
/*
    cout<<"Valor de x: ";cin>>x;

    for(int i=0;i<x; i++){
    apx=new float[x];
    cout<<"Real: ";cin>>apx[0];
    cout<<"Imaginario: "; cin>>apx[1];
    cout<<apx[0]<<" + "<<apx[1]<<"i"<<endl;
}*/
}
