typedef struct
{
	char apellido[31];
	char nombre[31];
	int edad;
	int isEmpty;
}ePersona;

ePersona altaPersona (ePersona per)
{
    printf("\nIngrese apellido: ");
    scanf("%s",per.apellido);

    printf("\nIngrese nombre: ");
    scanf("%s",per.nombre);

    printf("\nIngrese edad: ");
    scanf("%d",&per.edad);
    per.isEmpty=0;

    return per;

}
