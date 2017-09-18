#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,m;
for (n=0;n<6;n=n+1)
{
printf("x");
}
printf("\n");

for (m=0;m<6;m=m+1)
{
printf("x");
for(n=0;n<6;n=n+1)
{
printf(" ");
}
printf("x\n");
}
for (n=0;n<6;n=n+1)
{
printf("x");
}
}

