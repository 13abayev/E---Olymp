#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    int sum = a % 2 + b % 2 + c % 2;
    if (sum >= 1 && sum <= 2){
        printf("YES");
    }
    else{
        printf("NO");
    }
}