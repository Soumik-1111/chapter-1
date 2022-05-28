#include<stdio.h>

int main(){
    int number;
    printf("Enter the number (0 - 100) \n");
    scanf("%d" , &number);

    // if(number < 30){
    //     printf("FAIL");
    // }else if(number>30 && number<=100){
    //     printf("PASS");
    // }
    //  else{
    //       printf("Wrong Nubmer");
    //       }

    number <=30? printf("FAIL") : printf("PASS");

    return 0;
}