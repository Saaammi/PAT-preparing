#include<stdio.h>
int main(){
    int num[10]={0};//存放10个数字的个数
    int i,j;
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);//读入
    }
    for(i=1;i<10;i++){//从数字1的位置开始查找
        if(num[i]!=0){//这个数字个数不为0
            printf("%d",i);//打印该数字一次
            num[i]--;//打印过减少1次
            break;//记得找到一个即可退出
        }
    }
    for(i=0;i<10;i++){//从数字0开始遍历
        for(j=1;j<=num[i];j++){//至少有一个数字才打印
            printf("%d",i);
        }
    }
    return 0；
    
}
