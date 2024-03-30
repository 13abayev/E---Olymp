#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a = n / 1000;
    int b = n /100 % 10;
    int c = n /10 % 10;
    int d = n % 10;
    int sum = a*a + b*b + c*c + d*d;

    printf("%d", sum);
}