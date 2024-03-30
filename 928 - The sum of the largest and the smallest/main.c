#include<stdio.h>

int main() {
   int n;
   int mini = 101;
   int maks = -101;
   scanf("%d", &n);
   int a[n];
   for(int i = 0 ; i < n; i++){
        scanf("%d", &a[i]);
        if (a[i] > maks){
            maks = a[i];
        }
        if(a[i] < mini){
            mini = a[i];
        }
   }
   printf("%d", maks + mini);
   return 0;
}
