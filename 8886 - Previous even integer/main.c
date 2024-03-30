#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    n = n - 2;
    if (n%2 != 0){
        n += 1;
    }
    printf("%d",n);
}