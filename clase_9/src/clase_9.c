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

int funcMenu(int *opcion);

int main(void) {

	datosPersonales vecAgenda[3];
	// --- LATER ADD ", vecContactos[3], vecAmigos[3]" --- //
	int i;

	for(i=0;i<3;i++)
	{
		printf("\nIngrese nombre: ");
		gets(vecAgenda[i].nombre);
		printf("\nIngrese apellido: ");
		gets(vecAgenda[i].apellido);

	}


	//vecAgenda[0].nombre
	//strcpy(vecAgenda[0].nombre,"nombreDeLaPersona");
	// --- strcmp (sTRINGcOMPARE) - compara characters mayor/menor --- //
	// ----- 1. ENLISTAR - 2.ALTA - 3.BAJA - 4. MODI - 5.ORDENAR ----- //

	return 0;
}

int funcMenu(int *opcion)
{
	int valor;
	valor = *opcion;
	int retorno;
	retorno = -1;

	switch (valor)
	​{
		case 1:
	    	// ENLISTAR
	    	break;

	    case '2':
			// ALTA
	    	break;

	    case '3':
			// BAJA
	    	break;

	    case '4':
			// MODI
	    	break;

	    case '5':
			// ORDENAR
	    	break;

	    default:
	    	// RETORNO ERROR
	    	break;
	}

	return retorno;
}



