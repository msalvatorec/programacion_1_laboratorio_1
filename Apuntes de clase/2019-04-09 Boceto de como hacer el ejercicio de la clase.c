#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Realizar una agenda para guardar los datos de hasta 100 personas de las cuales se toman los siguientes datos:

Apellido
Nombre
Legajo (NO SE PUEDE REPETIR)
Edad
Estado*/
#define cant 100

//el int legajo[] asi escrito significa que va a recibir un array de parametro
//char *apellido[] se pasa asi pq es un array de arrays de chars
void alta(int legajo[],char *apellido[])

void baja (int legajo[], int estado[], int cantidad)
{
    char rta;
    int legajoAux;
    int i;
    int flag=0;

    printf("Legajo a buscar: ");
    scanf("%d",&legajoAux);

    for (i=0;i<cantidad;i++)
    {
        if (legajo[i]==legajoAux)
        {   do{
                printf("%d",legajo[i]);
                printf("Dar de baja el registro? s/n");
                fflush(stdin); //creo que solo funciona en WIndows, para que sirve?
                scanf("%c",&rta);
                rta=toupper(rta);
            while (rta!='S')&&rta!='N'};
            //Al salir del dowhile rta es S o N (unicos 2 posibles)

            //como lo encontro, le cambiamos el valor al flag
            flag=1;

            if(rta=='S')
            {
                estado[i]=0;
                break;  //este break rompe con el for asi no continua
                        //la iteracion al pedo porque ya encontre
                        //lo que necesitabamos
            }
            else
            {
                printf("No se elimino el registro...");
            }
        }
    }

    if (flag==0)
    {
        printf("Legajo inexistente");
    }

}

/*  Para hacer la modificacion es exactamente igual que la baja.
    Se modifican algun que tro printf porque no se elimina nada, sino
    que se modifica...
    Se modifica solamente el if(rta=='S') ya que voy a modificar datos.
    Puedo hacer un switch con un menu para dar a elegir que voy a modificar
    (el nombre, y luego por el menu elegir otra cosa y modificarla hasta
    salir del menu porque no quiero modificar mas nada).
*/


int menu(char opciones[])
{
    //muestro las opciones por pantalla para luego capturar el dato con el switch
    int opcion;
    printf("%s",opciones);
    scanf("%d",&opcion);
    return opcion;
}

int main()
{
    int estado[cant];

    int i;
    for (i=0;i<cant;i++)
    {
        estado[i]=0;
    }

    do
    {
        system("clear");
        //Mando todo los printf que necesito printf("")
        //mando todos los scanf que necesito

        switch(opcion)
        {
            case 1:
                alta(legajo,apellido,nombre,etc);
        }
    }

    for (i=0;i<cant;i++)
    {
        if(estado[i]==0)
        {
            estado[i]=1;
            break;
        }
    }


    return 0;
}
