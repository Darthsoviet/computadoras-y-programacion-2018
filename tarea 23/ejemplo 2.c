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
typedef struct alumnos ALUMNO;

int main()
{
ALUMNO var1;

printf("introduce edad");
scanf("%d",&var1.edad);
printf("introduce el nombre");
fflush(stdin);
gets(var1.nombre);
printf("Edad: %d Nombre: %s",var1.edad,var1.nombre);

return 0;

}
