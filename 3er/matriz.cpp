#include <iostream>
#include <stdlib.h>

using namespace std;
void leer(float [][3]);
void ver(float [][3]);
void sumar(float [][3],float [][3]);
void restar(float [][3],float [][3]);
void multiplicar (float [][3],float [][3]);
main(){
    float M1[3][3], M2[3][3];

    cout<<"Leer tu primer matriz"<<endl;
    leer(M1);
    cout<<"Leer tu segunda matriz"<<endl;
    leer(M2);
    cout<<"Tu primer matriz es: "<<endl;
    ver(M1);
    cout<<"Tu Segunda matriz es: "<<endl;
    ver(M2);
    cout<<"La suma de tus matrices "<<endl;
    sumar(M1,M2);
    cout<<"La resta de tus matrices "<<endl;
    restar(M1,M2);
    cout<<"La multiplicacion de tus matrices "<<endl;
    multiplicar(M1,M2);


}
void leer (float M[][3]){

    for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<"Elemento ["<<i<<"]["<<j<<"]: ";
        cin>>M[i][j];
    }


    }}
void ver (float M[][3]){
    cout<<"Tu primer Matriz"<<endl;
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<M[i][j]<<" ";
}
cout<<"\n";
}
}
void sumar (float M1[][3],float M2[][3]){

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<M1[i][j]+ M2[i][j]<<" ";
}
cout<<"\n";
}

}
void restar (float M1[][3],float M2[][3]){

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<M1[i][j]-M2[i][j]<<" ";
}
cout<<"\n";
}

}

void multiplicar (float M1[][3],float M2[][3]){

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<M1[i]*M2[j]<<" ";
}
cout<<"\n";
}

}
