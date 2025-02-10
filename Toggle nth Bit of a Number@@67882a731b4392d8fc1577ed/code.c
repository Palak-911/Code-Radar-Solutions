#include <stdio.h>
int main(){
    int n,num;
    scanf("%d %d",n,num);
    num^=(1<<n);
    printf("%d",n);

    return 0;
}

