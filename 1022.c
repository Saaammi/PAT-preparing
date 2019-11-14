#include<stdio.h>
int main(){
    int A,B,D;
    int sum,i;
    scanf("%d %d %d",&A,&B,&D);
    int digit[32]={0};
    sum=A+B;
    if(sum){
        for(i=0;sum;i++){
            digit[i]=sum%D;
            sum=sum/D;
        }
        for(i=i-1;i>=0;i--){
            printf("%d",digit[i]);
        }
    }
    else
        printf("0");//注意A和B均为0的情况
    
}
