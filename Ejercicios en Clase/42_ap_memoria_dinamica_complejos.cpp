/*

C++ permite a los programadores controlar la asignación y desasignación de memoria en un programa,
para cualquier tipo integrado o definido por el usuario.
Esto se conoce como administración dinámica de memoria y se lleva a cabo mediante los operadores new y delete.

¿No sería estupendo si pudiéramos usar arreglos que contuvieran exactamente el número de elementos
necesarios para almacenar un numero especifico de datos?
La asignación dinámica de memoria nos permite hacer eso exactamente.

El operador new asigna el almacenamiento del tamaño apropiado para tipo de dato,

Ejemplo

    float *x:
    x = new float ;

En el proximo ejemplo veremos que el apuntado *c1 y *c2 los podremos utilizar como si fuera un
arreglo unidimensional (sin embargo NO lo es, es solo para ejemplificarlo)

*/

#include<iostream>
using namespace std;

main(){
    float *c1;
    c1=new float;  // memoria dinamica
    cout<<"       real : ";cin>>c1[0];
    cout<<" imaginario : ";cin>>c1[1];
    cout<<c1[0]<<" + "<<c1[1]<<" i = "<<endl;
}

