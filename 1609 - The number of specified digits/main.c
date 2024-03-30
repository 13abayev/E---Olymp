#include<stdio.h>

int main() {
   int n, a;
   int count = 0;
   scanf("%d", &n);
   scanf("%d", &a);
   if(n < 0){
    n *= -1;
   }
   while(n != 0){
        if(n % 10 == a){
            count ++;
        }
        n /= 10;  
   }
   printf("%d", count);

}
