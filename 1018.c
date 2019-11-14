#include<stdio.h>
//我只能说，别整幺蛾子了，考虑好最基本的再说

//定义一个函数，找到甲和乙分别赢的最多的手势
char max(int winB,int winC,int winJ){
    if(winB>=winC && winB>=winJ){return 'B';}
    if(winC>winB && winC>=winJ){return 'C';}
    if(winJ>winB && winJ>winC){return 'J';}
}
int main(){
    int N;
    char J,Y;//定义甲乙输入的手势
    int Jwin=0,Jlose=0;
    int JwinC=0,JwinB=0,JwinJ=0,YwinC=0,YwinB=0,YwinJ=0;
    scanf("%d\n",&N);
    for(int i=0;i<N;i++){
        scanf("%c %c\n",&J,&Y);//！！！必须在每个字符前面加上一个空格
        if(J=='C' && Y=='J'){Jwin++;JwinC++;}
        if(J=='C' && Y=='B'){Jlose++;YwinB++;}
        if(J=='J' && Y=='B'){Jwin++;JwinJ++;}
        if(J=='J' && Y=='C'){Jlose++;YwinC++;}
        if(J=='B' && Y=='C'){Jwin++;JwinB++;}
        if(J=='B' && Y=='J'){Jlose++;YwinJ++;}
    }

    printf("%d %d %d\n",Jwin,N-Jwin-Jlose,Jlose);
    printf("%d %d %d\n",Jlose,N-Jwin-Jlose,Jwin);
    printf("%c %c",max(JwinB,JwinC,JwinJ),max(YwinB,YwinC,YwinJ));
}
