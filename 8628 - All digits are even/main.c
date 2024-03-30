#include<stdio.h>

int main() {
   int n;
   scanf("%d",&n);

   while(n != 0){
    if (n % 2 != 0){
        printf("NO");
        return 0;
    }
    n/=10;
   }
   printf("YES");
   return 0;
}
