#include<stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   int count = 0;
   for(int i = 0; i < 10; i++){
      for(int j = 0; j < 10; j++){
         int k = n - i - j;
         if(k >= 0 && k <= 9) count++;
      }
   }
   printf("%d",count*count);
   
}
