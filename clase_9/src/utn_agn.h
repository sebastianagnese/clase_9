/*
 * utn_agn.h
 *
 *  Created on: 18 sep. 2019
 *      Author: alumno
 */

#ifndef UTN_AGN_H_
#define UTN_AGN_H_

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
int ingresoEstructuras(struct datosPersonales);
int mostrarEstructura(struct datosPersonales);

#endif /* UTN_AGN_H_ */
