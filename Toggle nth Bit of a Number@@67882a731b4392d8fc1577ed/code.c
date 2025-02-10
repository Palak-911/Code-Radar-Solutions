#include <stdio.h>
int main(){
    int n,num;
    scanf("%d %d",&n,&num);
    int sb=(1<<num);
    int newnum=n^sb;
    printf("%d",newnum);

    return 0;
}

