///piedra papel o tijeras
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
    int m,p,o,j1,j2;


printf("presione 1 para jugador contra computadora o 2 para pvp");
scanf("%d",&o);
switch(o)
{
case 1://jugador vs pc
    srand(time(NULL));
//aleatoriedad


printf("welcome xD elige\n");
printf("1=piedra\n");
printf("2=papel\n");
printf("3=tijera\n");
scanf("%d",&p);
//inicio del switch
m=rand()%4;
switch(p)
{
//caso de piedra
case 1:
    if(p=1)
    {

    printf("usted selecciono piedra\n");

        if(m==1)
        {
        printf("EMPATE %d",m);
        break;
        }

        if(m==2)
        {
        printf("DERROTA %d",m);
        break;
        }
        if(m==3)break;
        {
        printf("VICTORIA %d",m);
        break;
        }
    }
    else
    {
    printf("error");
    }
break;
//caso papel
case 2:
 if(p=2)
    {

    printf("usted selecciono papel\n");

        if(m==2)
        {
        printf("EMPATE %d",m);
        break;
        }
        else
        if(m==3)
        {
        printf("DERROTA %d",m);
        break;
        }
        else
        if(m==1);
        {
        printf("VICTORIA %d",m);
        break;
        }
    }
else
{
printf("error");
}
break;
case 3:
 //caso tijeras
  if(p=3)
    {

    printf("usted selecciono tijeras\n");

        if(m==3)
        {
        printf("EMPATE %d",m);
        break;
        }
        else
        if(m==1)
        {
        printf("derrota %d",m);
        break;
        }
        else
        if(m==2);
        {
        printf("victoria %d",m);
        break;  break;

        }
    }
    else
    {
    printf("error");
    }
break;
default:
printf("error");
}
break;
case 2://jugador vs jugador
printf("jugador uno, elija\n");
printf("1=piedra\n");
printf("2=papel\n");
printf("3=tijera\n");
scanf("%d",&j1);
printf("jugador2, elija\n");
printf("1=piedra\n");
printf("2=papel\n");
printf("3=tijera\n");
scanf("%d",&j2);
switch(j1)//switch de pvp
{
case 1://el jugador 1 selleciono piedra
if(j1=1)
    {

    printf("jugador 1 escojio piedra\n");

        if(j2==1)
        {
        printf("empate jugador 2 escojio piedra");
        break;
        }
        else
        if(j2==2)
        {
        printf("Gana jugador 2 escojio papel");
        break;
        }
        else
        if(j2==3);
        {
        printf("Gana jugador 1, j2 escojio tijeras");
        break;

        } break;
    }
    else
    {
    printf("error");
    }
    break;
    case 2://el jugador 1 selecciono papel
    if(j1=2)
    {

    printf("jugador 1 escojio papel\n");

        if(j2==2)
        {
        printf("empate jugador 2 escojio papel");
        break;
        }
        else
        if(j2==3)
        {
        printf("Gana jugador 2 escojio tijera");
        break;
        }
        else
        if(j2==1);
        {
        printf("Gana jugador 1, jugador 2 escojio piedra");
        break;
        }
    }
    else
    {
    printf("error");
    }
    break;
    case 3://el jugador 1 escojio tijera
       if(j1=3)
    {

    printf("jugador 1 escojio tijeras\n");

        if(j2==3)
        {
        printf("empate jugador 2 escojio tijeras");
        break;
        }
        else
        if(j2==1)
        {
        printf("Gana jugador 2 escojio piedra");
        break;
        }

        if(j2==2);
        else
        {
        printf("Gana jugador 1, jugador 2 escojio papel");
        break;
        }
    }
    else
    {
    printf("error");
    }
    break;
    default:
    printf("error");
    }

break;
default:

printf("error");

}
}




