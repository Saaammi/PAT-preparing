#include<stdio.h>
#include<math.h>
int main(){
    int N,i,j,k=2,sum=0,flag;
    int p[100000]={2,3};//2和3需要另外考虑
    int d[100000]={0};
    scanf("%d",&N);
    for(i=2;i<=N;i++){
        flag=0;
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                flag=1;//非素数
                break;
            }        
        }
        if(!flag){
            p[k++]=i;//p[]数组中存放了所有的素数
        }
    }
    for(i=0;i<k;i++){
        d[i]=p[i+1]-p[i];
        if(d[i]==2){
            sum++;
        }
    }
    printf("%d",sum);

}
