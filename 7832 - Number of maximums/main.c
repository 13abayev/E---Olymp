#include<stdio.h>

int main() {
   int n;
   scanf("%d", &n);
   int maks = -101;
   int count = 0;
   int val;
   for(int i = 0; i < n; i++){
    scanf("%d", &val);
    if(val > maks){
        maks = val;
        count = 1;
    }
    else if(val == maks){
        count ++;
    }
   }
   printf("%d", count);
}
