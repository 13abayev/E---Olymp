#include<stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   int count = 0;
   int num;
   float grn
   for (int i = 0; i < n; i++){
    scanf("%d %f",&num, &grn);
    if (grn < 50){
        count += num;
    }
   }
   printf("%d",count);
}
