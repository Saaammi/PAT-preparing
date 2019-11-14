#include<stdio.h>
int main(){
    int score[101]={0};
    int N,K,x,y;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&x);
        score[x]++;
    }
    scanf("%d",&K);
    for(int i=0;i<K;i++){
        scanf("%d",&y);
        if(i==(K-1))
            printf("%d",score[y]);
        else
            printf("%d ",score[y]);
    }
    return 0;
}
