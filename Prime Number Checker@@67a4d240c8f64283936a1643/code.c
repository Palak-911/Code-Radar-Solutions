#include<stdio.h>
primenotprime(int n){
    int isprime=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            printf("0");
        }
        else{
            priintf("1");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    scanf("%d",&n);
    scanf("%d",&n);
    scanf("%d",&n);
    scanf("%d",&n);
    scanf("%d",&n);
    scanf("%d",&n);
    int p = primenotprime(n);
    printf("%d",p);
    return 0;
}