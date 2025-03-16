#include<stdio.h>
int main(){
    int month;
    scanf("%d",&month);
    if(month ==1,3,5,7,8,10,12){
        printf("31");
    }
    else if(month == 4,6,9,11){
        printf("30");
    }
    else if(month = 2){
        printf("28");
    }
    else printf("Invalid month");
    return 0;
}