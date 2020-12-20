#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


typedef struct _lista{
	int cuerdas;
	int serie;
	char marca[20];

	struct _lista *sig;
	struct _lista *ant;
}lista;

lista *crear(int c, int s, char m[]);
lista *alta(lista *l, int c, int s, char m[]);
lista *altaF(lista *l, int c, int s, char m[]);
lista *altaP(lista *l, int c, int s, char m[], int posi);
lista *baja(lista *l);
lista *bajaF(lista *l);
lista *bajaP(lista *l, int posi);
lista *cambio(lista *l, int posi, char o);
lista *cambioD(lista *l, char o, int s);

lista *ordenar(lista *l);

void consulta(lista *l);
void consultaD(lista *l);
int contador(lista *l);

int main()
{
	lista *list;
    list=NULL;
	int o, cont;
	int caracter, pos, nuevoDato;
	int cuerdas, serie, serie2;
	char marca[20], cam;

	do{
		system("CLS");
        printf("Inventario Guitarras\n\n");
    	printf("Opciones: \n\n");
    	printf("1.- Alta inicio\n");
    	printf("2.- Alta final \n");
    	printf("3.- Alta posicion\n");
        printf("4.- Baja inicio \n");
        printf("5.- Baja final \n");
        printf("6.- Baja posicion \n");
        printf("7.- Cambio de dato \n");
    	printf("8.- Ver datos \n");
    	printf("9.- Ver numero de elementos \n");
    	printf("10.- Ordenar \n");
    	printf("11.- Salir \n");
    	printf("\n");

    	scanf("%d", &o);

    	printf("\n");
    	system("cls");
    	switch(o){

                  case 1:
                       printf("Alta inicio \n");
                       fflush(stdin);
    				   printf("\nIngrese la Marca: ");
       		    	   scanf("%[^\n]",&marca);
       		    	   printf("\nIngrese el numero de cuerdas: ");
       		    	   scanf("%d",&cuerdas);
       		    	   printf("\nIngrese el numero de serie: ");
       		    	   scanf("%d",&serie);
       				   list=alta(list, cuerdas, serie, marca);
                       system("PAUSE");
    			  break;

    			  case 2:
                       printf("Alta final \n");
                       fflush(stdin);
    				   printf("\nIngrese la Marca: ");
       		    	   scanf("%[^\n]",&marca);
       		    	   printf("\nIngrese el numero de cuerdas: ");
       		    	   scanf("%d",&cuerdas);
       		    	   printf("\nIngrese el numero de serie: ");
       		    	   scanf("%d",&serie);
       				   list=altaF(list, cuerdas, serie, marca);
                       system("PAUSE");
    			  break;

    			  case 3:
                       printf("Alta posicion \n");
                       consulta(list);
    			  	   printf("Ingrese la posicion: ");
       		    	   scanf("%d",&pos);
                       fflush(stdin);
    				   printf("\nIngrese la Marca: ");
       		    	   scanf("%[^\n]",&marca);
       		    	   printf("\nIngrese el numero de cuerdas: ");
       		    	   scanf("%d",&cuerdas);
       		    	   printf("\nIngrese el numero de serie: ");
       		    	   scanf("%d",&serie);
       				   list=altaP(list, cuerdas, serie, marca, pos);
                       system("PAUSE");
    			  break;

    			  case 4:
                        list = baja(list);
                        system("PAUSE");
    			  break;

    			  case 5:
                        list = bajaF(list);
                        system("PAUSE");
    			  break;

    			  case 6:
                        consulta(list);
    			  		printf("Ingrese la posicion: ");
       		    	    scanf("%d",&pos);
                        list = bajaP(list, pos);
                        system("PAUSE");
    			  break;

    			  case 7:

                           consulta(list);
                           printf("Ingrese el numero de serie del dato a cambiar: ");
                           scanf("%d",&serie2);
                           fflush(stdin);
                           printf("\n (c) Cambiar no. de cuerdas \n (m) cambiar marca \n (s) cambiar no. de serie \n\n Elija una opcion: ");
                           scanf("%c",&cam);

                            if(cam!='c' && cam!='m' && cam!='s' )
                           		printf("Ingrese una opcion valida. \n");

                        	else{
                        		list=cambioD(list, cam, serie2);
                        	}
					    system("PAUSE");
    			  break;

    			  case 8:
        				consultaD(list);
        				system("PAUSE");
    			  break;

    		      case 9:
                        cont=contador(list);
        				printf("El numero de elementos en la lista es: %d \n\n",cont);
        				system("PAUSE");
    			  break;

    			  case 10:
                        list=ordenar(list);
                        printf("Lista ordenada. \n\n");
        				system("PAUSE");
    			  break;

    			  case 11:
    				printf(".......\n\n");
    				system("PAUSE");
    			  break;

    			  default:
    			  printf("\n Opcion no valida \n");
    			  system("PAUSE");
    	}

    }while(o!=11);


	getch();
	return 0;
}

lista *crear(int c, int s, char m[]){
	lista *l;
	l=(lista *)malloc(sizeof(lista));

	l->cuerdas=c;
	l->serie=s;
	strcpy(l->marca, m);

	l->sig=NULL;
    l->ant=NULL;
	return l;
}

lista *alta(lista *l, int c, int s, char m[]){
	lista *nueva, *aux, *aux2;
	nueva=crear(c,s,m);
	if(l==NULL){
		l=nueva;
	}
	else{
		aux=l;
		nueva->sig=aux;
		nueva->sig->ant=nueva;
	}

	return nueva;
}

lista *altaF(lista *l, int c, int s, char m[]){
	lista *nueva, *aux;
	nueva=crear(c,s,m);

	if(l==NULL){
		l=nueva;
	}

	else{
		aux=l;
		while(aux->sig != NULL){
			aux=aux->sig;
		}
		aux->sig=nueva;
		aux->sig->ant=aux;
	}

	return l;

}

lista *altaP(lista *l, int c, int s, char m[], int posi){
	lista *nueva, *aux, *aux2;
	int x;
	int i=1;
	if(l==NULL){
		printf("lista vacia.\n\n");
		return l;
		}

	else{
		x=contador(l);
		if(x+1<posi || posi==0)
			printf("No existe esa posicion.\n\n");

		else if(posi==1)
			l=alta(l, c,s,m);

		else if(posi==x+1)
			l=altaF(l, c,s,m);

		else{
			aux=l;

			for(i; i<posi; i++)
                aux=aux->sig;

			aux2=aux->ant;
			nueva=crear(c,s,m);

			nueva->sig=aux;
			nueva->sig->ant=nueva;
			aux2->sig=nueva;
			aux2->sig->ant=aux2;

		}

	}
	return l;
}


lista *baja(lista *l){
	lista *aux;
    aux=l;
	if(l==NULL)
		printf("lista vacia.\n\n");

    else if(contador(l)==1){
        aux=NULL;
        printf("Se ha eliminado el dato correctamente\n\n");
	}

	else{
		aux=aux->sig;
		aux->ant=NULL;
		printf("Se ha eliminado el dato correctamente\n\n");
	}

	return aux;
}

lista *bajaF(lista *l){
	lista *nuevofinal, *eliminar;
	nuevofinal=l;
	if(l==NULL)
		printf("lista vacia.\n\n");

	else if(contador(l)==1)
		l=baja(l);

	else{
		while(nuevofinal->sig->sig != NULL)
			nuevofinal=nuevofinal->sig;

		nuevofinal->sig = NULL;
		printf("Se ha eliminado el dato correctamente\n\n");
	}

	return l;
}

lista *bajaP(lista *l, int posi){
	lista *nueva, *aux, *aux2;
	int x;
	int i=1;
	int j=1;
	aux=l;
	nueva=l;
	if(l==NULL){
		printf("lista vacia.\n\n");
		return l;
		}

	else{
		x=contador(l);
		if(x<posi || posi==0)
			printf("No existe esa posicion.\n\n");

		else if(posi==1)
			l=baja(l);

        else if(posi==x)
			l=bajaF(l);

		else{

			while(i<posi){
				aux=aux->sig;

				i++;
			}
			aux2=aux;
			aux=aux->sig;
			aux->ant=aux2->ant;
            aux->ant->sig=aux;
		}
	}
	return l;
}

lista *cambio(lista *l, int posi, char o){
	lista *aux;
	int x;
	int i=1;
	int cuerdas, serie;
	char marca[20];

	if(l==NULL)
		printf("lista vacia.\n\n");
	else{
		x=contador(l);
		if(x<posi || posi==0)
			printf("No existe esa posicion.\n\n");
		else{
			aux=l;
			while(i<posi){
				aux=aux->sig;
				i++;
			}
			switch(o){
			    case 'c':
			        printf("Ingrese el nuevo numero de cuerdas: ");
			        scanf("%d",&cuerdas);
			        aux->cuerdas=cuerdas;
			    break;

			    case 'm':
			    	fflush(stdin);
			        printf("\nIngrese la nueva marca: ");
			       	scanf("%[^\n]",&marca);
			       	strcpy(aux->marca, marca);
			    break;

			    case 's':
					printf("Ingrese el nuevo numero de serie: ");
			        scanf("%d",&serie);
			        aux->serie=serie;
			    break;

			    default:
			    	system("PAUSE");
		    }
		//	aux->serie=s;
		}
	}
	return l;
}

lista *cambioD(lista *l, char o, int s){
	lista *aux, *aux2;
	int x, p;
	int i=1;
	int j=0;
	int cuerdas, serie;
	char marca[20];

	if(l==NULL)
		printf("lista vacia.\n\n");

	else{
		x=contador(l);
        aux=l;
        aux2=l;
        while(i<=x){

            if(aux->serie == s)
                j++;
            else
                j=j;

            if(aux->sig != NULL)
                aux=aux->sig;

            if(j==0)
                aux2=aux2->sig;

            i++;
        }

        if(j==0)
            printf("El dato ingresado no existe.\n\n");

        else if(j==1){

        	switch(o){
			    case 'c':
			        printf("Ingrese el nuevo numero de cuerdas: ");
			        scanf("%d",&cuerdas);
			        aux2->cuerdas=cuerdas;
			    break;

			    case 'm':
			    	fflush(stdin);
			        printf("\nIngrese la nueva marca: ");
			       	scanf("%[^\n]",&marca);
			       	strcpy(aux2->marca, marca);
			    break;

			    case 's':
					printf("Ingrese el nuevo numero de serie: ");
			        scanf("%d",&serie);
			        aux2->serie=serie;
			    break;

			    default:
			    	system("PAUSE");
		    }

		}
            //aux2->dato=datoN;

        else{
            printf("\nIngrese la posicion del dato a cambiar: ");
            scanf("%d", &p);
            l=cambio(l, p, o);
            }
	}
	return l;
}

void consulta(lista *l){
	int i=0;
	if(l==NULL)
		printf("lista vacia.\n\n");

	else{
        printf("Lista.\n");
		while(l!=NULL){
			i++;
			printf("\n   %d.- \n", i);
            printf("\n\tMarca: %s  ", l->marca);
            printf("\n\tCuerdas: %d  ", l->cuerdas);
            printf("\n\tNo. Serie: %d  \n", l->serie);
			l=l->sig;
		}
		printf("\n\n");
	}

}

void consultaD(lista *l){
    lista *aux, *aux2;
    aux=l;
    aux2=aux;
	int i,i2;
	i=1;
	i2=i;
	char m;
	if(l==NULL)
		printf("lista vacia.\n\n");

	else{

        do{
            printf("Lista.\n\n");
            if(aux==NULL){
                printf("\n%d.- \n", i2);
                printf("\n\tMarca: %s  ", aux2->marca);
                printf("\n\tCuerdas: %d  ", aux2->cuerdas);
                printf("\n\tNo. Serie: %d  ", aux2->serie);
                aux=aux2;
                i=i2;
                }

            else{
                printf("%d.- \n", i);
                printf("\n\tMarca: %s  ", aux->marca);
                printf("\n\tCuerdas: %d  ", aux->cuerdas);
                printf("\n\tNo. Serie: %d  ", aux->serie);
            }


            printf("\n\nMostrar Dato Anterior (a) / Mostrar Siguiente dato (s) / Salir (x): ");
            scanf("%s",&m);

            switch(m){

            case 'a':
                i2=i;
                i--;
                aux2=aux;
                aux=aux->ant;
                break;

            case 's':
                i2=i;
                i++;
                aux2=aux;
                aux=aux->sig;
                break;

            case 'x':

                break;

            default:
    			  printf("\n Opcion no valida \n");
    			  system("PAUSE");
            }
            system("cls");
        }while(m!='x');
	}

}

int contador(lista *l){
	int c=0;

	if(l==NULL)
		c=0;

	else{
		while(l!=NULL){
			c++;
			l=l->sig;
		}
	}
	return c;
}

lista *ordenar(lista *l){
	lista *nuevaL;
	lista *aux, *aux2;
	int auxS, auxC, s , c;
	char auxM[20], m[20];
    int serieAux=0;
	if(contador(l)>1){

		for(int i=1; i<contador(l); i++){

			int k=0;
			aux=l;
			for(int i2=1 ;i2<i; i2++)
				aux=aux->sig;

			nuevaL=aux;
            aux2=aux;
			///////////////////obtenemos los datos de la posicion
			s=nuevaL->serie;
			c=nuevaL->cuerdas;
			strcpy(m, nuevaL->marca);

			///////////////////
			auxS=aux->serie;
			auxC=aux->cuerdas;
			strcpy(auxM, aux->marca);

			for(int j=i; j<contador(l); j++){

					if(nuevaL->serie > aux->sig->serie){
					    if(k==0){
                            k=j+1;
                            auxS=aux->sig->serie;
                            auxC=aux->sig->cuerdas;
                            strcpy(auxM, aux->sig->marca);
                            serieAux=aux->sig->serie;
                            }
                        else{
                                if(serieAux > aux->sig->serie){
                                    k=j+1;
                                    auxS=aux->sig->serie;
                                    auxC=aux->sig->cuerdas;
                                    strcpy(auxM, aux->sig->marca);
                                    serieAux=aux->sig->serie;
                                }
                        }
					}
					aux=aux->sig;
			}
			///////////////////////////// Intercambiar datos
			nuevaL->serie=auxS;
			nuevaL->cuerdas=auxC;
			strcpy(nuevaL->marca, auxM);

			for(int h=i;  h<k ; h++){
				nuevaL=nuevaL->sig;
			}

			nuevaL->serie=s;
			nuevaL->cuerdas=c;
			strcpy(nuevaL->marca, m);
			/////////////////////////////////
		}
	}
	return l;
}
