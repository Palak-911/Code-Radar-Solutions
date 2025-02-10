#include <stdio.h>
unsigned int toggleNthBit(unsigned int num,int n){
    return num^(1 << n);
}
int main(){
    unsigned int num;
    int n;

    scanf("%u",&num);
    scanf("%d",&n);
    unsignd int result = toggleNthBit(num,n);
    printf("%u\n",num);
    printf("%u\n",n,result)

return 0;
}

