#include<stdio.h>

int main(){

    int hieght;
    printf("Enter your hieght\n");
    scanf("%d", &hieght);
    if (hieght<5){
        printf("You are not eligible");}
    else{
        printf("You are eligible");
    }
    return 0;

}