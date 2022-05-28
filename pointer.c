#include<stdio.h>

// int main(){
//     int age = 22;
//     int *ptr= &age;
//     int **pptr= &ptr;


//     // // address
//     // // printf("%p\n",&age);
//     // printf("%u\n",&age);
//     // printf("%u\n",ptr);
//     // printf("%u\n",&ptr);

//     // // value
//     // printf("%d\n",age);
//     // printf("%d\n",*ptr);
//     // printf("%d\n",*(&age));

//     printf("%d",**pptr);
//     return 0;

// }
// #include<stdio.h>

// void swap(int a, int b);
// void _swap(int *a,int *b);

// int main(){
//     int a=3,b=5;
//     swap(a,b);

//     _swap(&a,&b);
//     printf("a = %d & b = %d", a ,b);
//     return 0;
// }

// // call by value
// void swap(int a,int b){
//     int c=a;
//     a=b;
//     b=c;
//     printf("a = %d & b = %d", a ,b);
// }
// // call by referance
// void _swap(int *a, int *b){
//     int t= *a;
//     *a = *b;
//     *b = t;

//     printf(" a = %d & b = %d", *a , *b);
// }

int main(){
    int x=10;
    char ch='s';
    int *p;
    p= &x;
    printf("%d", *(int *)p);
    return 0;
}