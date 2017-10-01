#include<stdio.h>
#include<stdlib.h>

int main(){
int d;
//esta seccion escanea la opcion del macua
printf("introduzca un numero del 1 al 7\n");
scanf("%d",&d);
//aqui es donde la magia empieza
switch(d){
    case 1:
    printf("lunes\n");
    break;
    case 2:
    printf("martes\n");
    break;
    case 3:
    printf("miercoles\n");
    break;
    case 4:
    printf("jueves\n");
    break;
    case 5:
    printf("viernes\n");
    break;
    case 6:
    printf("sabath/n");
    break;
    case 7:
    printf("domingo\n");
    break;
    default:
    printf("tarado");
    break;

    }
    system ("PAUSE");

    }



