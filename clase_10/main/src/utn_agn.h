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

/*
 * int main
 *
 * int contador = 0;
 *
 *
 *
 *
 * funcInicializar (array, int size)
 *
 * int retorno=1
 * if array = null && size>0){
 *
 * for (;size>0;size--){
 * }
 * array[size-1].isEmpy=1; // 1 or 0
 * }
 * retorno=0
 *
 *
 *
 * buscarEmpty (array, int size, int *posicion)
 *
 * int reotnor=-1
 * int i
 * if(array!=null && size>=0 && posicion !=null)
 * {
 * 	for(i=0;i<size;i++)
 * 	{
 * 	retorno =0
 * 	*posicion=1;
 * 	break;
 * 	}
 * }
 *
 *
 *
 *
 * buscarID (array, int size, int valorBuscado, int
 *
 * int ret
 * int i
 * if (array!=null && size >=0)
 *
 * 		for (i=0;i<size;i++)
 *
 * 			if(array[i].isEmpty==1)
 * 				continue;
 * 			else if(array[i].idUnico==valorBuscado)
 * 				retorno 0
 * 				*posicion=i
 * 				break;
 * 			}
 * 		}
 * }
 *
 *
 * buscarInt (array, int size, int valorBuscado,
 *
 *
 *
 *
 *
 *
 * buscarString (array, int size, char *valorBuscado
 *
 *
 *
 *
 *
 * funcAlta (array, int size, int *contador)
 *
 * int retorno=-1
 * int posicion
 * if array!=null && size >0 && contadorID!=null)
 * {
 * 	if(fantasma_buscarEmpty(array,size,&posicion)==-1)
 * 		{
 * 		 printf("no hay lugares vacios")
 * 		}
 * 		else
 * 		{
 * 			(*contadorID)++;
 * 			array[posicion].idUnico=*contadorID;
 * 			array[posicion].isEmpty=0;
 *
 * 		}
 *
 *
 *
 *
 * funcBaja (array, int sizeArray)
 *
 *
 *
 *
 *
 *
 * funcBajaRepetido (array, int sizeArray, int
 *
 *
 *
 *
 *
 *
 *
 * funcModi (array, int sizeArray)
 *
 * int retorno=-1;
 * int posicoin
 * int id
 * char opcion
 * if (array!=null && sizeArray>0)
 *
 * 	 utnm_getUnsignedInt ("id a modi: ", "error", 1, sizeof(int),1,
 * 	 if(fantasma_buscarID(array.sizeArray
 *
 *
 *
 *
 * funcOrdenarPorString (array. int size)
 *
 *
 *
 *
 *
 *
 * funcListar (array. int size)
 *
 *
 *
 *
 *
 *
 *
 *
 */
