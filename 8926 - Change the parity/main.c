#include<stdio.h>

int main() {
   int n, pow = 1;
   scanf("%d", &n);
   int m = n;
   while(m != 0){
    if ((m % 10) % 2 == 0){
        n += pow;
    }
    else{
        n -= pow;
    }
    pow *= 10;
    m /= 10;
   }
   printf("%d",n);
}
