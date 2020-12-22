#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generar_numeros_aleatorios(int numeros[]){
	int tn;
	srand(time(0));
	for(int i=0; i<10; i++){
		tn=i+(rand()%100);
        numeros[i]=tn;
    }
}

void ordenar_numeros(int numeros[]){
	int tn;
	for (int i=0; i<10; i++){
		for (int j=0; j<10; j++){
			if(numeros[j]> numeros[j+1]){
				tn=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=tn;
			}
		}
	}
}
void ver_numeros (int numeros[]){
	for(int i=0; i<10; i++){
		cout<<" numero["<<i+1<<"] = "<<numeros[i]<<endl;
	}
    system ("pause");
}
