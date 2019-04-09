#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int i,j;

char nombre[5][50] = {"Pedro","Carlos","Juan","Ernesto","Mario"};
char apellido[5][50]= {"Gomez","Fernandez","Paz","Perez","Lopez"};
char auxiliar[50];
for(i=0;i< 5-1;i++)
{
    for(j=i+1;j<5;j++)
    {
        if(strcmp(apellido[i],apellido[j])>1)
        {
            strcpy(auxiliar,nombre[i]);
            strcpy(nombre[i],nombre[j]);
            strcpy(nombre[j], auxiliar);

            strcpy(auxiliar,apellido[i]);
            strcpy(apellido[i],apellido[j]);
            strcpy(apellido[j], auxiliar);
        }
    }
}

for (i=1; i<strlen(nombre); i++)
{
    printf("%s, %s\n",apellido[i],nombre[i]);
}
}
