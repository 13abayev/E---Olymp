#include<stdio.h>

int main() {
   int a,b,c,x,y;
   scanf("%d %d %d %d %d", &a,&b,&c,&x,&y);
   if((a <= x && b <= y) || (a <= y && b <= x)){
    printf("YES");
    return 0;
   }
   if ((a <= x && c <= y) || (a <= y && c <= x)){
    printf("YES");
    return 0;
   }
   if ((b <= x && c <= y) || (b <= y && c <= x)){
    printf("YES");
    return 0;
   }
   printf("NO");
}
