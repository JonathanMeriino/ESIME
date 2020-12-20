#include<iostream>
#include<windows.h>

using namespace std;
void titulo(void);
void leer(int &);
void ver_figura(int );
main(){
    int num;
    titulo();
    leer(num);
    ver_figura(num);
}

void titulo(void){
    cout<<"\t\t\t   *** Ejemplo for anidado ***\n";
    cout<<"\t\t\t  Programa que dibuja un cuadro \n\n";
    cout<<"\t\t\t              * * * *\n";
    cout<<"\t\t\t              * * * *\n";
    cout<<"\t\t\t              * * * *\n";
    cout<<"\t\t\t              * * * *\n\n";
}
void leer(int &num){
    cout<<"\t\tIngrese el numero de * a imprimir : ";
    cin>>num;
    cout<<endl;
}
void ver_figura(int num ){

    for(int i=0; i<num ; i++){
        for(int j=0; j<num; j++){
            cout<<" * ";

        }
        cout<<endl;
    }
    cout<<"\n\n\n\t\t";
    system("pause");
}
