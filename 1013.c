#include<stdio.h>
#include<math.h>
int main(){
    int M,N;
    int num=0,flag,n=0;
    scanf("%d %d",&M,&N);
    for(int i=2;num<N;i++){//从2开始找素数,2是第一个素数,直到找到第N个素数,num不能等于N,注意边界
        flag=0;
        for(int j=2;j<=sqrt(i);j++){//不采用开方来提高效率会有一个测试点超时
            if(i%j==0){
                flag=1;//不是素数
                break;
            }
        }
        if(flag==0){
            num++;//找到一个素数就累加1
            if(num>=M){//第M个素数开始打印    
                n++;//打印一个累加1
                if(n%10==0){//打印了10个换行
                    printf("%d\n",i);
                }
                else if(num==N)
                    printf("%d",i);//打印到最后一个不加空格不换行
                else
                    printf("%d ",i);//正常打印
                
            }

        }
    }
}
