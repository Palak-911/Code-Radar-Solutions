int printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}
int selectionSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+97]>arr[j+1+97]){
                char temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

input:
3
z a m
output:
a m z