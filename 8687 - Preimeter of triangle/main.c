#include<stdio.h>

int main() {
   double a,b,c;
   while(scanf("%lf %lf %lf", &a, &b, &c) == 3){
    printf("%.4lf\n",a + b + c);
   }
}

