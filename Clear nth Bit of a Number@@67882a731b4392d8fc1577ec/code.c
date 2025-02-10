#include <stdio.h>
int main(){
    int num ;
    scanf("%d",&num);
    int n;
    scanf("%d",&n);
    int mask = ~(1<<n);
    int newnum =num&mask;
    printf("%d",newnum);

    return 0;
}