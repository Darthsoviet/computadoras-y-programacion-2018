#include<stdio.h>
#include<stdlib.h>
#include"info.h"

int main()
{
appInfoData("ejemplo de punteros","16/11/2017");
int a=10;
int *puntero;
puntero=&a;
printf("%d\n",*puntero);
printf("%d\n",puntero);
printf("%d\n",a);
printf("%d\n",&a);
return 0;
}
