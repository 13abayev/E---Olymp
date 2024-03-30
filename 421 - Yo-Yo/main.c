#include<stdio.h>

int main() {
   int k;
   double l;
   scanf("%lf %d", &l, &k);
   int count = 0;
   while(l / k > 1){
    count += 1;
    l /= k;
   }
   printf("%d",count);
}
