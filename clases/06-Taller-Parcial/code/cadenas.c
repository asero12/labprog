#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Retorna la longitud de la cadena de entrada "cad" */
int longCadena (char *cad) {
	int i=0;
	while (cad [i] != '\0') 
		i++;
	
	return i;
}

void copiarCadena (char *cad1, char *cad2) {
	int i, n = longCadena (cad1);

	for (i=0; i <= n; i++) 
		cad2[i] = cad1[i];
}
	

int main (int argc, char *argv[]) {
	char *cad1 = "hola";
	char *cad2;

	// Prueba longitud
	printf ("Longidud de %s es %d\n", cad1, longCadena (cad1));

	// Prueba copiar
	cad2 = (char *) malloc (longCadena (cad1));
	copiarCadena (cad1, cad2);
	printf ("Copia de %s es %s\n", cad1, cad2);

	return 0;
}
