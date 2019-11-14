#include<stdio.h>
int main(){
    char c;
    int N=0;
    int sum0=0,sum1=0;

    while((c=getchar())!='\n'){
        if(c>='a' && c<='z'){
            N+=c-'a'+1;
        }
        else if(c>='A' && c<='Z'){
            N+=c-'A'+1;
        }
    }
    while(N){
        if(N%2) sum1++;
        else sum0++;
        N/=2;
    }
    printf("%d %d",sum0,sum1);
    return 0;
}
