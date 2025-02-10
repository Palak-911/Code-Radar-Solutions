#include <stdio.h>
int main(){
    int num,n ;
    scanf("%d %d",&num,&n);
    int mask = ~(1<<num);
    int newnum =num&mask;
    printf("%d",newnum);

    return 0;
}