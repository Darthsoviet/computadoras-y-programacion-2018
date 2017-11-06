#include<stdio.h>
void fnrec(int a,int b,int x,int y){

    for(a=1;a<x;a=a+1){
    for(b=1;b<y;b=b+1){
    printf("* ");
    }
    printf("\n");
    }
    }


int main(){
int x=0,y=0,a=0,b=0;
printf("inserte ancho \n");
scanf("%d",&y);

printf("inserte alto x\n");
scanf("%d",&x);
fnrec(a,b,x+1,y+1);




}
