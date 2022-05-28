#include<stdio.h>

// int main(){
//     int age;
//     float salary , bonus , gross;
//     printf("Enter Your age(18 - 65) : \n");
//     scanf("%d" , &age);
//     printf("Enter Basic Salary : \n");
//     scanf("%f" , &salary);
//     bonus = (salary*2)/100;
//     gross = bonus + salary;

//     if(60<=age && age<=65){
//         printf("Your Salary is : %f \n" , salary+5000 );
//     }else if(18<=age && age<60){
//         if(salary>20000){
//             printf("Your Salary is : %f \n" , salary);
//         }else if(salary<=20000){
//             printf("Your Salary is :%f \n" , gross);
//         }
//     }else{
//         printf("Wrong Input \n");
//         }
//     return 0;
// }

int main(){
    int age;
    float salary, bonus, gross;
    printf("Enter Your Age (18 - 65) : \n");
    scanf("%d", &age);
    printf("Enter Basic Salary : \n");
    scanf("%f" , &salary);
    bonus = (salary*2)/100;
    gross = bonus + salary;

    if(age>=60){
        printf("Your Salary is : %f \n" , salary+5000 );
    }else{
        if (salary>20000){
            printf("Your Salary is : %f \n" , salary);
        }else if (salary<=20000){
            printf("Your Salary is :%f \n" , gross);
        }
        
    }
    
    return 0;
}