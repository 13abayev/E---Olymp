#include<stdio.h>

int main() {
   double x,y;
   scanf("%lf %lf", &x, &y);
   double res = 2*x*x  - 4*x*y + 3*y*y + (x+y)/7;
   printf("%.3lf",res);
}
