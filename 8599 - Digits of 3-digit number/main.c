#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a = n / 100;
    int b = n /10 % 10;
    int c = n % 10;

    printf("%d %d %d", a, b, c);
}