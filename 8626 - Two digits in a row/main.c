#include<stdio.h>

int main() {
   int n;
   scanf("%d", &n);
   int a[] = {n / 100, n / 10 % 100, n % 100};
   for (int i = 0; i < 3; i++){
        if (a[i] == 37){
            printf("YES");
            return 0;
        }
   }
   printf("NO");
   return 0;
}