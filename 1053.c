#include<stdio.h>
int main(){
    int N,K,D;
    float e,temp;
    int poss=0,sure=0;
    int sumPoss=0;

    scanf("%d %f %d",&N,&e,&D);
    for(int i=0;i<N;i++){
        scanf("%d",&K);
        sumPoss=0;
        for(int j=0;j<K;j++){
            scanf("%f",&temp);
            if(temp<e){
                sumPoss++;
            }
        }
        /*if(sumPoss>K/2){
            poss++;//错在把确定为空置的又加了一遍
            if(K>D){
                sure++;
            }
        }*/
        if(sumPoss>(K/2) && K>D){
                sure++;
        }
        else if(sumPoss>(K/2)) poss++;
        
    }
    printf("%.1f%% %.1f%%",100.0*poss/N,100.0*sure/N);

    return 0;
}
