   #include <stdio.h>
#include <stdlib.h>

int main()
{
            int n;
            printf("Introduzca número:");
    scanf("%d",&n);

    if (n%2==0) {
       printf("Es par.");
    }
    else
    {
       printf("Es impar.");
    }

    system("PAUSE");
    return 0;
}
