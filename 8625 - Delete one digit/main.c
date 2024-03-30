#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a = n / 100;
    int b = n / 10 % 10;
    int c = n % 10;
    int ab = a * 10 + b;
    int ac = a * 10 + c;
    int bc = b * 10 + c;
    if (ab >= bc && ab >= ac){
        printf("%d",ab);
    }
    else if (bc >= ab && bc >= ac){
        printf("%d",bc);
    }
    else {
        printf("%d",ac);
    }
}