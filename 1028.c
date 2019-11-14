#include<stdio.h>
#include<string.h>
int main(){
    int N,sum=0;
    char name[6],birth[11];
    char oldName[6],youngName[6];
    char oldBirth[11]="2014/09/06",youngBirth[11]="1814/09/06";//题目中说的今天就是今天，请记住

    scanf("%d\n",&N);
    for(int i=0;i<N;i++){
        scanf("%s %s\n",name,birth);
        if(strcmp(birth,"2014/09/06")<=0 && strcmp(birth,"1814/09/06")>=0){//比较字符串，请用strcmp函数谢谢
            sum++;
            if(strcmp(birth,oldBirth)<=0){
                strcpy(oldName,name);
                strcpy(oldBirth,birth);
            }
            if(strcmp(birth,youngBirth)>=0){
                strcpy(youngName,name);
                strcpy(youngBirth,birth);
            }
        }
    }
    if(sum){
        printf("%d %s %s",sum,oldName,youngName);
    }
    else printf("0");//注意没有一个生日合理的情况

    return 0;
}
