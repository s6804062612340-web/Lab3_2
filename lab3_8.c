#include<stdio.h>
int main(){
    int h,m,s,next;
    scanf("%d:%d:%d",&h,&m,&s);
    printf("hour:%d\nminute:%d\nsecond:%d\n",h,m,s);
    scanf("%d",&next);
    m=next+m;
    if(s>59){
        m++;s=s-60;
    }
    if(m>59 ){
        h++;m=m-60;
        if(m>59){
          h++;m=m-60;  
        }
    }
    if(h>23){
        h=h-24;
    }
    printf("hour:%d\nminute:%d\nsecond:%d\n",h,m,s);
}
