#include <stdio.h>

int main()
{
    int lenght, width;

    printf("What is the lenght of the rectangle\n");
    scanf("%d", &lenght);

    printf("What is the width of the rectangle\n");
    scanf("%d", &width);

    printf("The area of the rectangle is %d", lenght * width);
    return 0;
}