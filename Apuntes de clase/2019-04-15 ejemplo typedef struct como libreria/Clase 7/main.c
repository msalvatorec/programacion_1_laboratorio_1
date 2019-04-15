#include <stdio.h>
#include <stdlib.h>
#include "ePersona.h"


/*struct Persona
{
	char apellido [31];
	char nombre [31];
	int edad;
	int isEmpty;
};*/

/*typedef struct
{
	char apellido[31];
	char nombre[31];
	int edad;
	int isEmpty;
}ePersona;*/

int main()
{
    ePersona per;
    per=altaPersona(per);



    printf("\n\nApellido: %s \t",per.apellido);
    printf("Nombre: %s \t ",per.nombre);
    printf("Edad: %d \n\n",per.edad);


    return 0;


}
