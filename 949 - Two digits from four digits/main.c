#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    printf("%d", num/100 % 10 * 10 + num /10 % 10);
}