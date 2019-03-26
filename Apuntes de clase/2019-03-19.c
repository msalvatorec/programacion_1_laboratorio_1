#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int i;
    /*Como se hace con el for impresiones del 1 al 10
    for (i=0;i<10;i++)
    {
            printf("%d \n",(i+1));
    }*/

    /*Como se hace con el WHILE
    i=1;
    while (i<11)
    {
        printf("%d \n",i);
        i++;
    }*/

    /*Echo con DOWHILE
    i=1;
    do{
        printf("%d \n",i);
        i++;
    }while(i<11);*/

    /*Ejemplo de IF-Else anidados
    int hora=8;
    printf("Ingrese la hora: ");
    scanf("%d", &hora);
    if((hora>5)&&(hora<12)){
        printf("Es de mañana");
    }
    else{
        if ((hora>=12)&&hora<14){
            printf("Es el mediodia");
        }
        else{
            if((hora>=14)&&(hora<20)){
                printf("Es de tarde");
            }
            else{
                    printf("Es de noche");
            }
        }
    }*/
    char hora=8;
    printf("Ingrese la hora: ");
    scanf("%c", &hora);

    switch (hora){
    case '1':
            printf("Es de madrugada");
            break;
    case '2':
            printf("Es de mañana");
            break;
    case '3':
            printf("Es mediodia");
            break;
    case '4':
            printf("Es de tarde");
            break;
    case '5':
            printf("Es de noche, a dormir!");
            break;
    }

return 0;
}
