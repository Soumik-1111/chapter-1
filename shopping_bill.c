#include<stdio.h>

// int main()
// {
// 	int pos,pot,potie;
// 	char shirt;
// 	printf("\n Enter the shirt type \n");
// 	scanf("%c",&shirt);
// 	printf("%c",shirt);
// 	int gross;
// 	printf("\n Enter the price of shirt trouser and tie \n");
// 	scanf("%d %d %d",&pos,&pot,&potie);
// 	printf("%d %d %d",pos,pot,potie);
// 	int total;
// 	total=pos+pot+potie;
// 	printf("\n Total amount is=%d \n",total);
// 	if(total>=5000&&shirt=='J')
// 	{
// 		pos=pos-0.02*pos;
// 		total=pos+pot+potie;
// 		printf("\n total=%d \n",total);
// 		gross=total-0.05*total;
// 		printf("\n Gross amount is =%d",gross);
		
// 	}
// 	else if(total>=10000&&shirt=='J')
// 	{
// 		pos=pos-0.02*pos;
// 		total=pos+pot+potie;
// 		printf("\n total=%d \n",total);
// 	    gross=total-0.1*total;
// 		printf("\n Gross amount is =%d",gross);	
// 	}
// 	else if(total>=5000)
// 	{
	
//         gross=total-0.05*total;
// 		printf("\n Gross amount is =%d",gross);
		
//     }
// 	else if(total>=10000)
// 	{
	
// 		gross=total-0.1*total;
// 		printf("\n Gross amount is =%d",gross);	
// 	}
// 	else
// 	{
// 		printf("\n no discount \n");
// 	}
	
	
// 	return 0;
// }

int main(){
	double shirt,trouser,tie;
	printf("Enter shirt,trouser & tie amounts : \n");
	scanf("%lf%lf%lf", &shirt,&trouser,&tie);

	int ch;
	printf("Does the shirts have J-tag(0/1)= \n");
	scanf("%d",&ch);
	if(ch == 1)
	shirt = shirt-(shirt*2/100);
	double Total_amount = shirt+trouser+tie;
	if(Total_amount>=5000 && Total_amount<10000)
		Total_amount=Total_amount-(Total_amount*5/100);
	else if(Total_amount>=10000)
		Total_amount=Total_amount-(Total_amount*10/100);
	printf("Amount You Have To Pay : Rs %lf \n", Total_amount);
	return 0;		

}