#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   int nro, max, min, flag=0;
   char rta;
   do{
        printf("Ingrese un nro");
        scanf("%d",&nro);
        if (flag==0||nro>max){
            max=nro;
        }
        if (flag==0||nro<min){
            min=nro;
            flag=1;
        }

        do{
            printf("Continuar? (S/N)");
            fflush(stdin);
            scanf("%c", &rta);
            rta=toupper(rta);
        }while (rta!='S'&&rta!='N');
    }while(rta=='S');

    system("cls");
    printf("El numero maximo es: %d\nEl numero minimo es: %d",max,min);

return 0;
}
