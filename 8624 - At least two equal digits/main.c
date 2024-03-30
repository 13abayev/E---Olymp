#include<stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   int a[] = {n / 10000, n / 1000 % 10, n / 100 % 10, n / 10 % 10, n % 10};
   int count, n1;
   for (int i = 0; i < 5; i++){
        count = 0;
        for (int j = 0; j < 5; j++){
            if (a[i] == a[j]){
                count++;
            }
            if (count >= 2){
                printf("YES");
                return 0;
            }
        }
   }
   printf("NO");
   return 0;
}
