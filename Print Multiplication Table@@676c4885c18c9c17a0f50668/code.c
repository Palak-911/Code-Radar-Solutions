#include<stdio.h>
int main(){
    int n,c;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        c = n*i;
        printf("%d * % = %d"n,i,c);
        printf("\n");
    }
    return 0;
}