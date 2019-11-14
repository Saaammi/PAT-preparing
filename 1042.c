#include<stdio.h>
int main(){
    int ch[128]={0};
    int max=0,maxI;
    char c;

    while((c=getchar())!='\n'){
        if(c>='a'&& c<='z'){
            ch[c]++;
        }
        if(c>='A'&& c<='Z'){
            ch[c-'A'+'a']++;
        }
        
    }
    for(int i=0;i<128;i++){
        if(ch[i]>max){
            max=ch[i];
            maxI=i;
        }
    }
    printf("%c %d",maxI,max);

    //开心，一次ac
    return 0;
}
