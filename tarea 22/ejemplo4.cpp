#include<stdio.h>
#include<stdlib.h>
#include"info.h"
#define MAX 10
int main()
{
appInfoData("ejemplo de punteros","16/11/2017");
int cals[MAX]={8,9,8,8,6,7,9,8,10,10};
int *ptrcals;
int j=0;
ptrcals=cals;

printf("elemento\t direccion\t:%d\n");
for(j=0;j<MAX;j++)
printf("%d       \t %d\t %d \n",j,cals[j],&cals[j]);

printf("---------------\n");

printf("direccion a ala que apunta %d\n",ptrcals);
printf("valor a la que apunta %d\n",*ptrcals);
ptrcals=ptrcals+4;
printf("direccion a ala que apunta %d\n",ptrcals);
printf("valor a la que apunta %d\n",*ptrcals);




return 0;
}
