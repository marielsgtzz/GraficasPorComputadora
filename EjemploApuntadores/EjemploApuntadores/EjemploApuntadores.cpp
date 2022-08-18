#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXIMA_LONGITUD_CADENA 30
typedef struct EMP {
	char nombre[MAXIMA_LONGITUD_CADENA];
	char genero;
	int num_hijos;
	float salario;
	struct EMP* prox;
} empleado;
empleado* inicio;
int main() {
	empleado* e;
	int i;
	e = (empleado*)malloc(sizeof(empleado));
	inicio = NULL;
	for (i = 1; i <= 3; i++) {
		printf("Agregar datos para un empleado\n");
		printf("Nombre completo: ");
		fgets(e->nombre, MAXIMA_LONGITUD_CADENA, stdin);
		e->nombre[strlen(e->nombre) - 1] = '\0';
		printf("Genero (M/F/N): ");
		scanf_s("%c", &e->genero);
		printf("Numero de hijos: ");
		scanf_s("%d", &e->num_hijos);
		printf("Salario mensual: ");
		scanf_s("%f", &e->salario);
		fgetc(stdin);
		e->prox = inicio;
		inicio = e;
		e = (empleado*)malloc(sizeof(empleado));
	}
	e = inicio;
	while (e != NULL) {
		printf("\n\nInformacion del empleado\n");
		printf("Nombre del empleado %s\n", e->nombre);
		printf("Genero del empleado %c\n", e->genero);
		printf("Numero de hijos del empleado %d\n", e->num_hijos);
		printf("Salario mensual del empleado %f\n", e->salario);
		e = e->prox;
	}
}
