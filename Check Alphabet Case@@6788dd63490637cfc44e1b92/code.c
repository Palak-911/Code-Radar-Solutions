#include<stdio.h>
int main(){
    char ch;
    scanf("%c",ch);
    if("%d",ch>=65 && ch<=90){
        printf("Uppercase");
    }
    else if("%d",ch>=97 && ch<=122){
        printf("Lowercase");
    }

    return 0;
}