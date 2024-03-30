#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int a = num / 10;
    int b = num % 10;
    printf("%d",(a + b) * (a + b));
    
}