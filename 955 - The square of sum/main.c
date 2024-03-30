#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a = n / 1000;
    int b = n /100 % 10;
    int c = n /10 % 10;
    int d = n % 10;
    int sum = a + b + c + d;

    printf("%d", sum * sum);
}