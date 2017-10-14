#include<stdio.h>
#include<stdlib.h>

int main()
{
int n1;
float n2=0,n3=0;
printf("inserte un numero entero\n");
scanf("%d",&n1);
printf("inserte un numero decimal\n");
scanf("%f",&n2);
printf("inserte un numero decimal\n");
scanf("%f",&n3);

if(n1>n2&&n1>n3)//n1 es mayor
{
    if(n2>n3)
    {
    printf("%d es mayor, %f medio, %f menor",n1,n2,n3);//n1 es mayor y n3 menor
    }
    else
    {
    printf("%d es mayor, %f medio, %f menor",n1,n3,n2);//n1 es mayor y n2 menor
    }
}
else if(n2>n1&&n2>n3)//n2 es el mayor
{
    if(n1>n3)
    {
    printf("%f es el mayor, %d es el medio, %f es el menor",n2,n1,n3);//n2 es el mayor y n3 es el menor
    }
    else
    {
    printf("%f es el mayor, %f es el medio, %d es el menor",n2,n3,n1);//n2 es el mayor y n3 el menor
    }
}
else if(n3>n1&&n3>n2)//n3 es el mayor
{
    if(n2>n1)
    {
printf("%f es el mayor, %f es el medio, %d es el menor",n3,n2,n1);//n3 es el mayor y n1 es el menor
    }
    else
    {
    printf("%f es el mayor, %d es el medio, %f es el menor",n3,n1,n2);//n3 es el mayor y n2 el menor
    }
}
}
