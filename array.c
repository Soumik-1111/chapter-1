
#include<stdio.h>
#include<conio.h>

/*
void sample(){
    int n;
    printf("Enter n= ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array= ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
         printf("%d ",a[i]);
     printf("\n");
    
}

int main()
{
    sample();
    return 0;
}
*/

/*
// calculate sum & avg of 5 students

#include<stdio.h>
#include<conio.h>

void main(){

    int marks[5],i,sum=0;
    float avg;

    for(i=0;i<5;i++){
        scanf("%d", &marks[i]);
    }
    for(i=0;i<5;i++){
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("%d %f", sum, avg);
    getch();
}
*/
// reverse:

// int main(){
//     int a[5],i;
//     for(i=0;i<5;i++){
//         printf("Enter the array : ");
//         scanf("%d",&a[i]);
//     }
//     for(i=4;i>=0;i--){
//         printf("the array are : %d \n",a[i]);
//     }
//     return 0;
// }


// min & max value found :
/*
int main(){
    int n,i;
    printf("Enter the array size :");
    scanf("%d",&n);
    int a[n];
    printf("Enter array = ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int mx=a[0];
    int mn=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>mx){
            mx = a[i];
        }
        if(a[i]<mn){
            mn = a[i];
        }
    }
    printf("Maximum value is : %d\n ",mx);
    printf("Minmum value is : %d ",mn);
    return 0;

}
*/

// bubblesort
/*
int main(){
    int n,i,swap;
    printf("Enter the array size :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d  ", a[i]);
    }
    return 0;
}     
*/

// // 2nd highst

int main(){
    int a=8714,b=10;
    int j=a%b;
    printf("%d",j);
    return 0;
}