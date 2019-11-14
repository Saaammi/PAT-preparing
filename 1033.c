#include<stdio.h>
int main(){
    char ch[68],c;
    int flag=0;//一开始就赋值0，当第一行为空的时候也可正常输出
    int i=0;
    //scanf("%s\n",ch);///第一行可能为空，scanf函数会跳过空格等直接读取下一行出错
    while((c=getchar()) != '\n')
        ch[i++]=c;
    
    while((c=getchar()) != '\n'){
        for(i=0;ch[i];i++){
            flag=0;
            if(c==ch[i]){
                flag=1;
                break;
            }
            if(ch[i]>='A' && ch[i]<='Z'){
                  if(c==(ch[i]-'A'+'a')){
                    flag=1;
                    break;
                }
            }
            if(ch[i]=='+'){
                if(c>='A' && c<='Z'){
                    flag=1;
                    break;
                }
            }
        }
        if(!flag)
            putchar(c);
    }

    return 0;
}
