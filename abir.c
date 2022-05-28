#include<stdio.h>

// int main(){
    /*
    printf("Hello I am abir.\n I am a bad boy");
    int a = 5;
    printf(" %d", (a+1)<<2);
    printf(" %d", (a+2)>>1);
    printf(" %d", ~(a+3));
    */
    /*
    int a ;
    a = (printf("Abir"),2,3);
    printf("%d" , a);
    */
    // int a = 8,b;
    // b = (a++,++a,a>>2);
    // b = a++,++a;
    // printf("%d  %d", a , b);

    /*
    int x;
    x = 4%5;
    printf("%d" , x);
    */

//     int a = 0, b = 1, c = -1;
//     printf("%d" , --a * (5 + b) / 2 - c++ * b);

    
//     return 0;
// }

// int main()
// {
// int x=2,y,z;
// x*=3+2;
// x*=y=z=4;
// x=y==z;
// x==(y=z);
// printf("%d", x);

// return 0;
// }
    
int main(){
    int x=10,y=20,res;
    res=y++ + x++;
    res+= ++y + ++x;
    printf(" x = %d  y= %d  res= %d ",x,y,res);
    return 0;

}