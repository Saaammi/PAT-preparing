#include<stdio.h>

//定义绝对值函数，主要是打印时方便确认打印字符的个数，因为上下对称
int abs(int x){
    if(x>=0) return x;
    else return -x;
}
int main(){
    int N,n=1,i,j;
    char mark;
    scanf("%d %c",&N,&mark);
    while(2*n*n-1<=N){
        n++;
    }
    n--;//找到的值总是大1
    for(i=0;i<2*n-1;i++){
        for(j=0;j<n-1-abs(n-1-i);j++)//j确定打印空格的个数，后面的空格不再打印
            putchar(' ');//先打印空格
        for(j=0;j<2*abs(n-1-i)+1;j++)
            putchar(mark);
        putchar('\n');
    }
    printf("%d",N-2*n*n+1);

    return 0;
}
