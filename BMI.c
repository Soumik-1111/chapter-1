#include<stdio.h>
int main(){
    float W,h,bmi;
    printf("Enter weight \n");
    scanf("%f", &W);
    printf("Enter height \n");
    scanf("%f", &h);
    bmi = W/h*h;
    if(bmi>25)
    printf("OVERWEIGHT");
    if(bmi>18.5 && bmi<=25)
    printf("HEALTHY");
    return 0;

}