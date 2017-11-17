#include<stdio.h>
#include<stdlib.h>
#include"info.h"
#define MAX 10
int main()
{
appInfoData("ejemplo de punteros","16/11/2017");
int cals[MAX]={8,9,8,8,6,7,9,8,10,10};
int *ptrcals;

printf("valor del primer elemento:%d\n",cals[0]);
printf("direccion del primer elemento:%d\n",&cals[0]);
printf("direccion del primer elemento:%d\n",cals);

ptrcals=cals;
printf("valor del primer elemento:%d\n",*ptrcals);


return 0;
}
