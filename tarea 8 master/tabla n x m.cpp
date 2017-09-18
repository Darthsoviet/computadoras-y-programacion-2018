#include <stdio.h>
#include <stdlib.h>

int main(){

int n,m,k=0;

printf("inserte limite inferior");
scanf("%d",&n);
printf("inserte limite superior");
scanf("%d",&m);
if(n!=m)
    {
    for(n=n;n<=m;n=n+1)
        for(k=1;k<=10;k=k+1)
        printf("%d x %d = %d \n",n,k,n*k);
        printf("eso es todo paps");
    }
else
    {
    printf("no seas pen...");
    }

}
