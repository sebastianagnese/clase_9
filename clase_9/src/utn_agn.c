// --- Biblioteca de funciones AGN --- //

// ARREGLAR //
int ingresoEstructura(struct estruc)
{
	int i;
	int retorno;
	retorno = -1;

	for(i=0;i<3;i++)
	{
		printf("\nIngrese nombre: ");
		gets(vecAgenda[i].nombre);
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

// ARREGLAR //
int mostrarEstructura(struct datosPersonales)
{
	int i;
	int retorno;
	retorno = -1;

	printf("\nTESTNOM%s", vecAgenda[i].nombre);
    printf("\nTESTAPEL%s", vecAgenda[i].apellido);
    printf("\nTESTCALL%s", vecAgenda[i].calle);
    printf("\nTESTNUME%d", vecAgenda[i].numero);
}
