#include<stdio.h>
int main(){
    char A[1001],*p;//因为数字太大所以用字符串来存储
    int R=0,B,i;
    int temp;//记录每次做除法时借位后的值，一直是一个二位数
    p=A;
    scanf("%s %d",p,&B);
    
    for(i=0;A[i]!='\0';i++){
        temp=R*10+(A[i]-'0');//每次做除法的二位数=上一位的余数，加上这一位作为个位
        A[i]=temp/B+'0';//直接将商存到原数组中
        R=temp%B;//求余数，作为下一个二位数的十位
    }
    if(A[0]=='0' && A[1]!='\0')//第一位不够除商0的情况，不输出第一位的0
        p++;//引入指针方便输出
    printf("%s %d",p,R);
}