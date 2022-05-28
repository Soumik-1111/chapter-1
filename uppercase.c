#include<stdio.h>

int main(){
    char ch;
    printf("Enter the Character : \n");
    scanf("%c" ,&ch);

    if(ch >= 'A' && ch <= 'Z')
    // ch >= A or ch >= 65 same case
    {
        printf("Uppercase");
    }else if (ch >= 'a' && ch <= 'z'){
        printf("Lowercase");
    }else {
        printf("Not valid");
    }

    return 0;

}