#include <stdio.h>
int main(){
    int n,num;
    scanf("%d %d",n,num);
    n^=(1<<num);
    printf("%d",num);

    return 0;
}

