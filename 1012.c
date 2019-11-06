#include<stdio.h>
int main(){
    int N,A,flag=1,mark=1;//flag标志正负1,mark标志是否有数字
    int sum1=0,sum2=0,sum3=0,sum4=0,num=0,max=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&A);
        if(A%5==0){
            if(A%2==0)
                sum1+=A;
        }
        else if(A%5==1){
            sum2+=flag*A;
            flag=-flag;
            mark=0;
        }
        else if(A%5==2){
            sum3++;
        }
        else if(A%5==3){
            sum4+=A;
            num++;
        }
        else if(A%5==4){
            if(A>max){
                max=A;
            }
        }
    }
    if(sum1==0){
        printf("N ");
    }
    else
        printf("%d ",sum1);
    if(mark==1){
        printf("N ");
    }
    else
        printf("%d ",sum2);
    if(sum3==0){
        printf("N ");
    }
    else
        printf("%d ",sum3);
    if(num==0){
        printf("N ");
    }
    else
        printf("%.1f ",sum4*1.0/num);//注意输出的计算结果
    if(max==0){
        printf("N");
    }
    else
        printf("%d",max);

}
