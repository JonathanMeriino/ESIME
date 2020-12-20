/* Apuntadores

Las variables apuntadores contienen direcciones de memoria como sus valores.
Por lo general, una variable contiene directamenteun valor espec�fico.
Sin embargo, un apuntador contiene la direcci�n de memoria de una variable que, a su vez,
contiene un valor espec�fico.
En este sentido, el nombre de una variable hace referencia directa a un valor, y un apuntador
hace referencia indirecta a un valor.
Al proceso de hacer referencia a un valor a trav�s de un apuntador se le
conoce com�nmente como indirecci�n.

Al igual que las dem�s variables, los apuntadores se deben declarar antes de poder usarlos.
Por ejemplo.

    int *xap;

Operadores de apuntadores
El operador direcci�n (&) es un operador unario que obtiene la direcci�n de memoria de su operando. Por ejemplo,
teniendo en cuenta las siguientes declaraciones:
    int x = 5; // declara la variable x
    int *xap; // declara la variable apuntador xap

    la instrucci�n
    xap = &x; // asigna la direcci�n de x a xap

asigna la direcci�n de la variable x a la variable apuntador xap.
Entonces, se dice que la variable xap �apunta a� x.
Ahora, xap hace referencia indirecta al valor de la variable x.
Observe que el uso del signo & en la instrucci�n anterior no es el mismo que el uso del &
en la declaraci�n de una variable de referencia, a la cual siempre se le antepone el nombre de
un tipo de datos. Al declarar una referencia, el & forma parte del tipo.
En una expresi�n como &x, el & es un operador.

El operador *, que se conoce com�nmente como el operador de indirecci�n u operador de desreferencia, devuelve
un sin�nimo (es decir, un alias o sobrenombre) para el objeto al que apunta su operando apuntador.

El operado * , nos permite ver el contendio de la direccion guardada en el apuntador.


*/


#include<iostream>
#include<stdlib.h>
using namespace std;

main(){
    int x;
    int *xap;
    cout<<" El compilador asigna el valor aleatorio de x y xap \n\n";
    cout<<" valor x : "<<x<<endl;
    cout<<" valor xap : "<<xap<<endl;
    system("pause");
    cout<<" asignamos el 5 a x, y la direccion de x a xap \n\n";
    x=5;
    xap=&x;

    cout<<"             valor x : "<<x<<endl;
    cout<<"           Valor xap : "<<xap<<endl;
    system("pause");
    cout<<" asignemos un valor a x y veamos si cambia su direccion \n\n";
    cout<<"    Nuevo valor de x : ";cin>>x;
    cout<<"        Valor de xap : "<<xap<<endl;
    cout<<" valor contenido xap : "<<*xap<<endl;
    cout<<" \n observamos que el contenido cambia pero no la direccion \n\n";
    system("pause");
}
