#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int a = num / 100;
    int b = num / 10 % 10;
    int c = num % 10;
    printf("%d",a*b*c);
}