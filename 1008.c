#include<stdio.h>
int main(){
    int M,N,num[100],i;
    scanf("%d %d",&N,&M);
    M%=N;
    for(i=0;i<N;i++){
        scanf("%d",&num[i]);
    }
    for(i=N-M;i<=N-1;i++){
        printf("%d ",num[i]);
    }
    for(i=0;i<=N-M-2;i++){
        printf("%d ",num[i]);
    }
    printf("%d",num[N-M-1]);
    return 0;
}
