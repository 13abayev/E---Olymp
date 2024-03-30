#include<stdio.h>

int main() {
   double x;
   scanf("%lf", &x);
   double y = (x*x*x) - ((5 * x * x)/7) + (9 * x) - (3 / x) + 1;
   printf("%.3lf",y);
}
