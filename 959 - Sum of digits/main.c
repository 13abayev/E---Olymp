#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a = n / 1000;
    int d = n % 10;
    printf("%d", a + d);
}