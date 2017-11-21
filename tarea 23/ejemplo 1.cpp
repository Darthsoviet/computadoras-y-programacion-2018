#include<stdio.h>
#include<stdlib.h>

struct alumnos
{
int edad;
char nombre[60];
char genero;
char carrera[25];
char ncuenta[10];
};

int main()
{
struct alumnos var1;
printf("introduce edad");
scanf("%d",&var1.edad);
printf("introduce el nombre");
fflush(stdin);
scanf("%c",var1.nombre);
printf("Edad: %d Nombre: %s",var1.edad,var1.nombre);

return 0;





}
