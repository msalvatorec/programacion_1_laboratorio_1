#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strlwr y strupr no son estandares de c para sistemas operativos basados en Unix.
// las 2 funciones anexas sirven para suplantarlas e implementarlas por nuestra cuenta.


char *strlwr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = tolower((unsigned char)*p);
      p++;
  }

  return str;
}

char *strupr(char *str)
{
  unsigned char *p = (unsigned char *)str;

  while (*p) {
     *p = toupper((unsigned char)*p);
      p++;
  }

  return str;
}


int main()
{
    char nombre[50];
    char apellido[50];
    printf("\nIngrese nombre: ");
    scanf("%s",nombre);
    printf("\nIngrese apellido: ");
    scanf("%s",apellido);

    char cadenaFinal[100];

    int i;
    cadenaFinal[0]=toupper(nombre[0]);

    for (i=1; i<(strlen(nombre));i++)
    {
        cadenaFinal[i]=tolower(nombre[i]);
    }
    cadenaFinal[i]=' ';
    cadenaFinal[i+1]=toupper(apellido[0]);

    int j;
    for (j=1; j<(strlen(apellido));j++)
    {
        cadenaFinal[j+strlen(nombre)+1]=tolower(apellido[j]);
    }

    int longitudFinalFinal=strlen(nombre)+strlen(apellido)+1;
    cadenaFinal[longitudFinalFinal]='\0';

    printf("El nombre completo es: %s",cadenaFinal);


}
