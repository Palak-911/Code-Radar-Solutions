#include <stdio.h>
int main(){
    int n,nth;
    scanf("%d %d",&n,&nth);
    int lsb=~(1<<nth);
    int newnum=n&lsb;
    printf("%d",newnum);
}