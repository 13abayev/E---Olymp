#include<stdio.h>

int main() {
   double x,y,z,k;
   scanf("%lf %lf %lf %lf", &x, &y, &z, &k);
    printf("%.4lf\n", x + y);
    printf("%.4lf\n", x + y + z);
    printf("%.4lf\n", x + y + z + k);
}