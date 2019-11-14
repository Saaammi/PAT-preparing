#include<stdio.h>
int main(){
    int num[100001]={0};
    int N;
    int x,score,max=0;;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d %d",&x,&score);
        num[x]+=score;
    }
    for(int i=0;i<N;i++){
        if(num[i+1]>max){
            max=num[i+1];
            x=i+1;
        }
    }
    printf("%d %d",x,max);

    return 0;
}
