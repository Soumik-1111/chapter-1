#include<stdio.h>
#define N 50
// sum calculation
/*
int main(){
    int a[2][3],sum=0;
    printf("Enter the matrix numbers : ");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d " , a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("sum =%d", sum);
    return 0;
}
*/
// transpos of matrix
/*
int main(){
    int a[2][3],i,j;
    printf("Enter the matrix numbers : ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is : \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d " , a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ",a[j][i]);
    }
    printf("\n");
    }
    return 0;
}
*/
// sum of indivual row and column
/*
int main(){
    int a[3][3],i,j,sumrow,sumcol;
    printf("Enter the matrix :");
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                scanf("%d",&a[i][j]);
            }
    }
    printf("The matrix is : \n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d " , a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        sumrow=sumcol=0;
        for(j=0;j<3;j++){
            sumrow=sumrow+a[i][j];
            sumcol=sumcol+a[j][i];
        }
        printf("Sum of row is : %d\n,Sum of column is : %d\n ",sumrow,sumcol);
    }
    
    return 0;
}
*/

// sum of two matrix
/*
int main(){
    int a[2][3],b[2][3],c[2][3],i,j;
    printf("Enter the 1st matrix :");
    for(i=0;i<2;i++){
            for(j=0;j<3;j++){
                scanf("%d",&a[i][j]);
            }
    }
    printf("Enter the 2nd matrix :");
    for(i=0;i<2;i++){
            for(j=0;j<3;j++){
                scanf("%d",&b[i][j]);
            }
    }
    printf("The matrix are : \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d " , a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d " , b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

// multiplecation of matrix
/*
int main(){
    int a[N][N],b[N][N],c[N][N],i,j,m,n,p,q,sum;
    printf("Enter the 1st matrix row & column :");
    scanf("%d %d",&m,&n);
    printf("Enter the 1st matrix :");
    for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
    }
    printf("Enter the 2nd matrix row & column :");
    scanf("%d %d",&p,&q);
    printf("Enter the 2nd matrix :");
    for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                scanf("%d",&b[i][j]);
            }
    }
    printf("The 1st matrix is : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d " , a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe 2nd matrix is : \n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d " , b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    if(n!=p){
        printf("Can not multiply");
    }
    else{
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                sum=0;
                for(int k=0;k<m;k++){
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
            }
        }
        printf("The multiplcation is:\n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
*/