#include <stdio.h>
#include <stdlib.h>


struct Persona
{
	char apellido [31];
	char nombre [31];
	int edad;
	int isEmpty;
};

int main()
{
    struct Persona per;
    printf("\nIngrese apellido: ");
    scanf("%s",per.apellido);

    printf("\nIngrese nombre: ");
    scanf("%s",per.nombre);

    printf("\nIngrese edad: ");
    scanf("%d",&per.edad);
    per.isEmpty=0;

    printf("\n\nApellido: %s \t",per.apellido);
    printf("Nombre: %s \t ",per.nombre);
    printf("Edad: %d \n\n",per.edad);


    return 0;


}

