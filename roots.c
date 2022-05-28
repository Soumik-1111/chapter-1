// # include<stdio.h>
// # include<conio.h>
// # include<math.h>
// int main (){
//    float a,b,c,r1,r2,d;
//    printf ("enter the values of a b c \n");
//    scanf (" %f %f %f", &a, &b, &c);
//    d= b*b - 4*a*c;
//    if (d>0){
//       r1 = -b+sqrt (d) / (2*a);
//       r2 = -b-sqrt (d) / (2*a);
//       printf ("The real roots = %f %f", r1, r2);
//    }
//    else if (d== 0){
//       r1 = -b/(2*a);
//       r2 = -b/(2*a);
//       printf ("roots are equal =%f %f", r1, r2);
//    }
//    else
//       printf("Roots are imaginary");
//     return 0;
// }
#include <stdio.h>
#include <math.h>
int main()
{
  int a, b, c, d;
  double root1, root2;

  printf("Enter a, b and c where a*x*x + b*x + c = 0\n");
  scanf("%d%d%d", &a, &b, &c);

  d = b*b - 4*a*c;

  if (d < 0) { // complex roots, i is for iota (√-1, square root of -1)
    printf("First root = %.2lf + i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
    printf("Second root = %.2lf - i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
  }
  else if (d == 0)
  {
    root1 = -b/(2*a);
    root2 = -b/(2*a);
    printf("Roots are equal = %lf %lf", root1, root2);
  }
  else { // real roots
    root1 = (-b + sqrt(d))/(2*a);
    root2 = (-b - sqrt(d))/(2*a);

    printf("First root = %.2lf\n", root1);
    printf("Second root = %.2lf\n", root2);
  }

  return 0;
}