#include<stdio.h>

int main(){

    int a,b,c;

    printf("The A\n");
    scanf("%d", &a);

    printf("The B\n");
    scanf("%d", &b);

    printf("The C\n");
    scanf("%d", &c);

    printf("the sum is %d \n" , a+b+c);

    float average = a+b+c;
    printf("The average is %f \n" , average/3);
    
    return 0;
}