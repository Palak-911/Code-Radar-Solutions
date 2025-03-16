#include<stdio.h>
int main(){
    int a,b;
    char o;
    if(o=='+')printf("%d",a+b);
    else if(o=='-')printf("%d",a-b);
    else if(o=='*')printf("%d",a*b);
    else printf("%d",a/b);
    return 0;
}