#include<stdio.h>

int main(){
    
int paise25, paise50, rs1, rs2, rs5, rs10;
double total;
printf("\n Number of coins of:\n");
printf(" 25 paise = \n ");
scanf("%d",&paise25);
printf(" 50 paise = \n");
scanf("%d",&paise50);
printf(" 1 rupee = \n");
scanf("%d",&rs1);
printf(" 2 rupee = \n");
scanf("%d",&rs2);
printf(" 5 rupee = \n");
scanf("%d",&rs5);
printf(" 10 rupee = \n");
scanf("%d",&rs10);
total=paise25/4 + paise50/2 + rs1 + 2*rs2 + 5*rs5 + 10*rs10;

printf("\n Total amount in rupees: Rs %.02f\n",total);

return 0;
}
