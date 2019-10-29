#include<stdio.h>
#include<ctype.h>
int main(){
    int N,i,j,count,flag1,flag2,flag3;
    char p;
    scanf("%d",&N);
    while(getchar()=='\n');//遇到回车什么也不做
    for(i=0;i<N;i++){
        flag1=flag2=flag3=0;
        count=0;
        while((p=getchar())!='\n'){//当前的密码串
            count++;
            if(isdigit(p)){
                flag1=1;//有数字
            }
            else if(isalpha(p)){
                flag2=1;//有字母
            }
            else if(p!='.'){
                flag3=1;//不是数字也不是字母也不是小数点
            }
        }
        if(count<6){
            printf("Your password is tai duan le.\n");
        }
        else{
            if(flag3){
                printf("Your password is tai luan le.\n");
            }
            else if(flag1 && !flag2){
                printf("Your password needs zi mu.\n");
            }
            else if(!flag1 && flag2){
                printf("Your password needs shu zi.\n");
            }
            else printf("Your password is wan mei.\n");
        }
    }
    return 0;
}
