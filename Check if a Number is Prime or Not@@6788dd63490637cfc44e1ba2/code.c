#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<1)printf("Not Prime")
    else{
        for(int i=2;i<=n;i++){
            if(n%i==0){
                printf("Not Prime");
            }
            else{
                printf("Prime");
            }
        }
    }
    return 0;
}

