#include <stdio.h>
#include <stdlib.h>

int main(){
int n1;
int n2;
int n3;

printf("inserte 3 numeros marico mayores a 0:");
scanf("%d",&n1);
scanf("%d",&n2);
scanf("%d",&n3);
if(n1>0&&n3>0&&n3>0)
{
   if(n1>n2&&n1>n3)
   {
   printf("%d es mayor",n1);
   }
   if(n2>n1&&n2>n3)
   {
   printf("%d es mayor",n2);
   }
   if(n3>n2&&n3>n1)
   {
   printf("%d es mayor",n3);
   }
}
else
{
printf("ni eso haces bien kbron");
}
}
