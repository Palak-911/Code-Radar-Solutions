#include <stdio.h>
int main(){
    int n,num;
    scanf("%d %d",n,num);
    n^=(1<<num);
    printf("%d",n);

    return 0;
}

