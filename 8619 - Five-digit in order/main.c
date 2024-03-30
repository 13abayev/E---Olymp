#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a = n / 10000;
    int b = n / 1000 % 10;
    int c = n /100 % 10;
    int d = n /10 % 10;
    int f = n % 10;

    if (a < b && b < c && c < d && d < f){
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}