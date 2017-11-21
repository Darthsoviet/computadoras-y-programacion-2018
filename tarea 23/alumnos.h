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


ALUMNO nuevoAlumno(){
ALUMNO tmp;

printf("introduce edad");
scanf("%d",&tmp.edad);

printf("introduce el nombre");
fflush(stdin);
gets(tmp.nombre);

printf("introduce genero");
scanf("%c",&tmp.edad);

printf("introduce carrera");
fflush(stdin);
gets(tmp.carrera);

printf("introduce numero de cuenta");
fflush(stdin);
gets(tmp.ncuenta);



return tmp;

}
