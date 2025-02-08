#include <stdio.h>
int main(){
    int num ;
    scanf("%d",&num);
    int n;
    scanf("%d",&n);
    int mask = ~(1<<num);
    num = num & mask;
    printf("%d %d",n,num);

    return 0;
}