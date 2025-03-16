#include<stdio.h>
int main(){
    char ch;
    scanf("%c",ch);
    if(ch>='A' && ch<='Z'){
        printf("Uppercase");
    }
    else (ch>=97 && ch<=122){
        printf("Lowercase");
    }
    return 0;
}