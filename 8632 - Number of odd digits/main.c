#include<stdio.h>

int main() {
   long long a = 0;
   scanf("%lld", &a);
   int count = 0;
   while(a != 0){
    if(a % 2 != 0){
        count ++;
    }
    a /= 10;
   }
   printf("%d",count);
   return 0;
}
