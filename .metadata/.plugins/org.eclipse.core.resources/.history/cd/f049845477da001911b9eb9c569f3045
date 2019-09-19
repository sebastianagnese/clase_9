/*
 ============================================================================
 Name        : clase_9.c
 Author      : agn
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

typedef struct
	{
	char nombre[50];
	char apellido[50];
	char calle[50];
	int numero[50];

	}datosPersonales;

int funcMenu(int opcion);
int ingresoEstructuras();



int main(void) {


	ingresoEstructuras();


	//vecAgenda[0].nombre
	//strcpy(vecAgenda[0].nombre,"nombreDeLaPersona");
	// --- strcmp (sTRINGcOMPARE) - compara characters mayor/menor --- //
	// ----- 1. ENLISTAR - 2.ALTA - 3.BAJA - 4. MODI - 5.ORDENAR ----- //

}

int funcMenu(int opcion)
{
	int valor;
	int retorno;
	retorno = -1;

	printf("\n--- MENU ---\nLISTA DE OPCIONES");
	printf("\n1: Enlistar\n2: Alta\n3: Baja");
	printf("\n4: Modificar\n5: Ordenar\n");
	printf("\nIngrese una opcion: ");
	scanf(&valor);

	if(valor == 1)
	{
		// LISTA
		retorno = 0;
	}

	if(valor == 2)
	{
		// ALTA
		retorno = 0;
	}

	if(valor == 3)
	{
		// BAJA
		retorno = 0;
	}

	if(valor == 4)
	{
		// MODI
		retorno = 0;
	}

	if(valor == 5)
	{
		// ORDER
		retorno = 0;
	}

	printf("El valor ingresado fue: %d",valor);
	return retorno;
}

int ingresoEstructuras()
{
	int i;
	int retorno;
	retorno = -1;

	datosPersonales vecAgenda[3];
	// --- LATER ADD ", vecContactos[3], vecAmigos[3]" --- //

	for(i=0;i<3;i++)
	{
		printf("\nIngrese nombre: ");
		gets(vecAgenda[i].nombre);
		//strcpy(vecAgenda[i].nombre,);
		__fpurge(stdin);

		printf("\nIngrese apellido: ");
		gets(vecAgenda[i].apellido);
		__fpurge(stdin);
		printf("\nIngrese direccion: ");
		gets(vecAgenda[i].calle);
		__fpurge(stdin);
		printf("\nIngrese numeracion de la calle: ");
		gets(vecAgenda[i].numero);
		__fpurge(stdin);

		printf("\nTESTNOM%s", vecAgenda[i].nombre);
	    printf("\nTESTAPEL%s", vecAgenda[i].apellido);
	    printf("\nTESTCALL%s", vecAgenda[i].calle);
	    printf("\nTESTNUME%d", vecAgenda[i].numero);

	}

	return retorno;
}

