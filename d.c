#include <stdio.h>


int main(){
    float a,b;
    int x,y;
    char w ;
    //Instruction
    printf("Enter the following operators only !!! \n");
    printf(" 1 for addition \n");
    printf(" 2 for substraction \n");
    printf(" 3 for multiplication \n");
    printf(" 4 for division \n");
    printf(" 5 for modulus function \n");
    
   
    //taking the input of two numbers
    printf("Enter the first number:  \n");
    scanf("%f", &a);

    printf("Enter the second number:  \n");
    scanf("%f", &b);

    //taking the input of operator
    printf("Enter valid operator:\n");
    scanf("%c", &w);
    
    


    //forming loops
    
    if(w=='A'){
        printf("The addition of the given numbers is %f \n", a+b );
    } else if (w=='B'){
        printf("The substraction of the given numbers is %f \n", a-b);
    } else if (w=='C'){
        printf("The product of the given numbers is %f \n", a*b);
    } else if (w=='D'){
        printf("The the quotient of the given numbers is %f \n", a/b);
    } else if (w=='E'){
        x= (int)a;
        y= (int)b;
        printf("The remainder of the given numbers is %d \n", x % y);
    } else {
        printf("Enter a valid operator !!!");
    }
     
    return 0;

}