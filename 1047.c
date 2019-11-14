#include<stdio.h>
int main(){
    int team,mem,score;
    int num[1001]={0};
    int N,max=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d-%d %d",&team,&mem,&score);
        num[team]+=score;
    }
    for(int i=1;i<=1000;i++){
        if(num[i]>max){
            max=num[i];
            team=i;  
        }
    }
    printf("%d %d",team,max);

    return 0;
}
