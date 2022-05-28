#include<stdio.h>
#include<conio.h>


// void main(){
//     int i,j,n;
//     printf("enter the num : \n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     getch();
// }


// void main(){
//     int i,j,n;
//     printf("enter the num : \n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(i=1;i<=n;i++){
//         for(j=5;j>=i;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     getch();
// }


// void main(){
//     int i,j;
//     for(i=6;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     for(i=1;i<=6;i++){
//         for(j=6;j>=i;j--){
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     getch();
// }


// void main(){
//     int i,j,n;
//     printf("Enter the number of rows : ");
//     scanf("%d", &n);
//     for ( i = 1; i <=n; i++)
//     {
//         for(j=1;j<=n; j++){
//             if((i+j)<=n)
//             printf(" ");
//             else
//             printf("#");
//         }
//         printf("\n");
//     } 
// }


// void main(){
//     int i,j,n;
//     printf("enter the num : \n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i ; j++){
//             printf("%d", i);
//         }
//         printf("\n");
//     }
//     getch();
// }


// void main(){
//     int i,j,n,num=1;
//     printf("enter the num : \n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i ; j++){
//             printf("%d", num);
//             num++;
//         }
//         printf("\n");
//     }
//     getch();
// }


void main(){
    int i,j,space,x=0;
    for(i=1;i<=6;i++){
        for(space=6;space>=6-i;space--){
            printf("  ");
        }
        for(j=6;j>=i;j--){
            printf("%c ",'F'-x);
            x++;
        }
        x=i;
        printf("\n");
    }
    getch();
}


// int main(){
//     for (int i=5; i>= 1; i--){
//         for(int j =2; j<= i ; j++){
//             printf(" ");
//         }
//         for(int y =6-i; y>= 1 ; y--){
//             printf("#");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// void main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if ((i+j<=5))
//             {
//                 printf(" ");
//             }else{
//                 printf("%d",i);
//             }
//         }
//         printf("\n");
//     }
//     getch();
// }


// void main(){
//     int i,j,n;
//     printf("Enter the number of rows : ");
//     scanf("%d", &n);
//     for ( i = 1; i <=n; i++)
//     {
//         for(j=1;j<=9; j++){
//             if((i+j)<=9)
//             printf(" ");
//             else
//             printf("*");
//         }
//         printf("\n");
//     } 
//     getch();
// }   
  

// void main(){
//     int i,j,space;
//     for(i=4;i>=1;i--){
//         for(space=1;space<=i;space++){
//             printf(" ");
//         }
//         for(j=7;j>=i;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     getch();
// }


