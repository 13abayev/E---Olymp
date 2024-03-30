#include<stdio.h>

int main() {
   int num;
   long long sum = 0;
   while(scanf("%d", &num) != -1){
    sum += num;
   }
   printf("%lld",sum);
}
