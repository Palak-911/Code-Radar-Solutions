int findUnsortedSubarray(int arr[],int n){
    int sum=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                sum++;
            }
        }
    }
    printf("%d",sum);
}