#include<stdio.h>
int main(){
    int a,b,o,c,d,e,f;
    scanf("%d %d %d",&a,&b,&o);
    a+b=c;
    a-b=d;
    a/b=e;
    a*b=f;
    if(o==+)printf("%d",c);
    else if(o==-)printf("%d",d);
    else if(o==*)printf("%d",f);
    else printf("%d",e);
    return 0;
}