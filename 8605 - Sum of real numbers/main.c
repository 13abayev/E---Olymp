#include<stdio.h>

int main() {
   double x, y, z;
   scanf("%lf %lf %lf", &x, &y, &z);
   printf("%.4lf %.4lf %.4lf", x + y, x + z, y + z);
}
