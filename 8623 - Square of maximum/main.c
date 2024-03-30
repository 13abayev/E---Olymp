#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a = n / 100;
    int b = n / 10 % 10;
    int c = n % 10;
    int res = 0;
    if (a > b && a > c){
        if (b > c){
            res += 100 * a + b * 10 + c;
        }
        else{
            res += 100 * a + c * 10 + b;
        }
    }
    else if(b > c && b > a){
        if (a > c){
            res += 100 * b + a * 10 + c;
        }
        else{
            res += 100 * b + c * 10 + a;
        }
    }
    else{
        if (a > b){
            res += 100 * c + a * 10 + b;
        }
        else{
            res += 100 * c + b * 10 + a;
        }
    }
    printf("%d", res*res);
}