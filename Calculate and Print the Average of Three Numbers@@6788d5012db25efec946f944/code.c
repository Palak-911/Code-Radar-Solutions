#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    float avg = (x+y+z)/3;
    printf("Average: %0.2f",avg);

    return 0;
}