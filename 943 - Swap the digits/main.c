#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    printf("%d",num - (num / 100 * 100) + (num % 10 * 100) - num%10 + num/100 );
}