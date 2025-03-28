#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",n);
    printf("\n");
    if(arr[i]==0){
        n=n-1;
    }
    // minimum code
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>min){
            min=arr[i];
        }
    }
    arr[i]=arr[i]-min;
    return 0;
}