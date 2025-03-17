#include<stdio.h>
int primenotprime(int n){
    if(n<=1)return 0;
    else{
        for(int i=2;i<=n;i++){
            if(n%i==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
    }
    return;
}
int main(){
    int n;
    scanf("%d",&n);
     while (scanf("%d", &n) == 1) {
        int result = primenotprime(n);  
        printf("%d\n", result);  
    }
    return 0;
}