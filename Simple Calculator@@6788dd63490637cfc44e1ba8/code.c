#include<stdio.h>
int main(){
    int a,b;
    char o;
    if(o=='+'){
        printf("%d",a+b);
    }
    else if(o=='-'){
        printf("%d",a-b);
    }
    else if(0=='*'){
        printf("%d",a*b);
    }
    else if(o=='/'){
        if(b!=0){
            printf("%d",a/b);
        }
        else{
            printf("Error");
        }
    }
    return 0;
}