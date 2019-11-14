#include<stdio.h>
int main(){
    int ch[128]={0},max=0;
    char c;
    while((c=getchar())!='\n'){
        switch(c){
            case 'P':ch['P']++;break;
            case 'A':ch['A']++;break;
            case 'T':ch['T']++;break;
            case 'e':ch['e']++;break;
            case 's':ch['s']++;break;
            case 't':ch['t']++;break;
        }
    }
    for(int i=0;i<128;i++){
        if(ch[i]>max) max=ch[i];
    }
    for(int i=0;i<max;i++){
        if(ch['P']) {putchar('P');ch['P']--;}
        if(ch['A']) {putchar('A');ch['A']--;}
        if(ch['T']) {putchar('T');ch['T']--;}
        if(ch['e']) {putchar('e');ch['e']--;}
        if(ch['s']) {putchar('s');ch['s']--;}
        if(ch['t']) {putchar('t');ch['t']--;}
    }
    
    return 0;
    
}
