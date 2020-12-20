#include<iostream>
using namespace std;

main(){
    float *c1, *c2;
    c1=new float;
    cout<<"   complejo 1 \n\n";
    cout<<"       real : ";cin>>c1[0];
    cout<<" imaginario : ";cin>>c1[1];
    cout<<c1[0]<<" + "<<c1[1]<<" i = "<<endl;

    cout<<"   complejo 2 \n\n";
    cout<<"       real : ";cin>>c2[0];
    cout<<" imaginario : ";cin>>c2[1];
    cout<<c2[0]<<" + "<<c2[1]<<" i = "<<endl;

    cout<<"   suma c1 + c2 \n\n";
    cout<<c1[0]+c2[0]<<" + "<<c1[1]+c2[1]<<" i = "<<endl;
}

