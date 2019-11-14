#include<stdio.h>

int abs(int x){
    if(x>=0)return x;
    else return -x;
}
int main(){
    int gP,sP,kP,sumP=0;
    int gA,sA,kA,sumA=0;
    int change;
    scanf("%d.%d.%d %d.%d.%d",&gP,&sP,&kP,&gA,&sA,&kA);
    sumP=(gP*17+sP)*29+kP;
    sumA=(gA*17+sA)*29+kA;
    change=abs(sumA-sumP);
    gP=change/(17*29);
    sP=change%(17*29)/29;
    kP=change%(17*29)%29;
    if(sumP>sumA) printf("-%d.%d.%d",gP,sP,kP);
    else if(sumP<sumA)printf("%d.%d.%d",gP,sP,kP);
    else printf("0.0.0");//注意钱数正好的情况

    return 0;
}
