#include<stdio.h>
#include<stdlib.h>

int main()
{
int o=0,n1,n2,n3;
printf("-----menu de seleccion-----\n");
printf("----para suma presione  1--\n");
printf("----para resta presione 2--\n");
printf("--para salir presione n>=3--\n");

do
{
scanf("%d",&o);
switch(o)
{
case 1:
printf("selecciono suma inserte 2 numeros\n");
scanf("%d",&n1);
scanf("%d",&n2);
printf("resultado=%d\n",n3=n1+n2);
break;
case 2:
printf("selecciono resta inserte 2 numeros\n");
scanf("%d",&n1);
scanf("%d",&n2);
printf("resultado=%d\n",n3=n1-n2);
break;

}
}
while(o<3);
printf("salir");

}
