#include<stdio.h>

int main() {
   int index = 0;
   int sum_odd = 0, sum_even = 0;
   int n;
   scanf("%d", &n);
   while(n != 0){
    if(index % 2 == 0){
        sum_even += n % 10;
    }
    else{
        sum_odd += n % 10;
    }
    index += 1;
    n /= 10;
   }
   printf("%d", sum_odd * sum_even);
}
