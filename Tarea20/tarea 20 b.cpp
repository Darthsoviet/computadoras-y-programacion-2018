
#include<stdio.h>
#include"iva.h"

void fnrec(int a,int b,int x,int y)
{

    for(a=1;a<x;a=a+1)
    {
    for(b=1;b<y;b=b+1)
    {
    printf("* ");
    }
    printf("\n");
    }
}



int main()
{

int x=0,y=0,a=0,b=0;

printf("inserte ancho \n");
scanf("%d",&y);

printf("inserte alto x\n");
scanf("%d",&x);
fnrec(a,b,x+1,y+1);


float c=0;
printf("inserte  su  cantidad\n");
scanf("%f",&c);

printf(" el IVA de la cantidad es %f\n el  total es %f \n el sub total es %f ",fniva(c),c,c-fniva(c));

}


