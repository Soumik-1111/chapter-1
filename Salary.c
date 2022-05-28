#include<stdio.h>

int main(){
    double Basic_salary,DA,HRA,MA,Total_salary;
    printf("Please enter the Basic salary Basic salry,DA,HRA,MA \n");
    scanf("%lf%lf%lf%lf",&Basic_salary,&DA,&HRA,&MA,&Total_salary);

    DA = (0.01*DA)*Basic_salary;
    HRA = (0.01*HRA)*Basic_salary;
    MA = (0.01*MA)*Basic_salary;
    Total_salary = Basic_salary+ DA+HRA+MA;

    printf("Your Total salary is %lf", Total_salary);

    return 0;

}