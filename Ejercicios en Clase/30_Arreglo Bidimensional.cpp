/* Arreglo bidimensional

Un arreglo bidimensional es una colección finita, homogénea y ordenada
de datos, en la que se hace referencia a cada elemento del arreglo por
medio de dos índices. El primero de los índices se utiliza para indicar la fila,
y el segundo, para indicar la columna.

Un arreglo bidimensional permite almacenar N x M elementos del mismo tipo
(enteros, reales, caracteres, cadenas de caracteres, etc.) y acceder a cada uno de
ellos. Al igual que en los arreglos unidimensionales, se distinguen dos partes im-
portantes: los componentes y los índices. Los primeros hacen referencia a los
elementos que se almacenan en cada una de sus casillas, y los segundos, por otra
parte, especifican la forma de acceder a cada uno de los elementos. Para hacer
referencia a un componente de un arreglo bidimensional debemos utilizar tanto
el nombre del arreglo, como los índices del elemento (fila y columna).

Declaración de arreglos bidimensionales
El espacio que los arreglos ocupan en memoria se reserva en el momento de
realizar la declaración de los mismos.

Ejemplo .
void main(void){
int A[5][10];   // Declaración de un arreglo bidimensional de tipo entero de 5 filas y 10 columnas.
float B[5][5]; //  Declaración de un arreglo bidimensional de tipo real de 5 filas y 5 columnas.
...
}

by Jorge Anzaldo */

#include <iostream>
#include <stdlib.h>
using namespace std;

// funciones prototipos
void leer (float  M[][3]);
void ver(float M[][3]);

main(){
	float M[3][3];
	leer(M);
	ver(M);
	cout<<"\n\n";system("pause");
}
//Desarrollo de funciones
void leer (float  M[][3]){
    for (int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            cout <<"Elemento ["<<i<<"]["<<j<<"] : ";
            cin>>M[i][j];
        }
    }
}

void ver(float M[][3]){
    for (int i=0;i<3; i++){
        for(int j=0; j<3; j++){
             cout <<M[i][j]<<"   ";
        }
        cout<<"\n";
    }
}
