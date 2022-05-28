#include<stdio.h>

int main(){
    int math, science;
    printf("Enter your math number : \n");
    scanf("%d" , &math);

    printf("Enter your science number : \n ");
    scanf("%d", &science);

    if(math && science >= 40){
        printf("You have won gift of 45 \n");

    }else if( math || science){
        printf("you have won gift 15 \n");
    }else{
        printf("you are fail \n");
    }
 return 0;
}