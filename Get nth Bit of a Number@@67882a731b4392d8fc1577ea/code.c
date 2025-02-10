#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n;
    scanf("%d",&n);
    int mask  = 1<<n ;
    int bitvalue = a&mask;
    if(bitvalue != 0){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }


    return 0;
}