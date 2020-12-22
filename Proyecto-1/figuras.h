#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<math.h>

using namespace std;

void cuadrado (int n){
    cout <<"Dame el valor de los renglones a llenar con * = ";cin>>n;
    cout<<"El valor de n = "<<n<<" \n\n";

      for(int i=0; i<n ; i++){
            cout <<"\t\t\t\t";
        for(int j=0; j<n; j++){
            cout<<" * ";

        }
        cout<<endl;
    }

    }
void triangulo(int n){
 cout <<"Dame el valor de los renglones a llenar con * = ";cin>>n;

    cout<<"El valor de n = "<<n<<" \n\n";

    cout <<"\n\n\t\t\t\t";
    for (int j = 0;j<n;++j){
        for (int i=0;i<n-j-1;++i)
            cout<<" ";
        for (int i=0;i<2*j+1;++i)
            cout<<"*";
        cout<<endl<<"\t\t\t\t";
        }
        cout<<"\n\n\n";

}







