#include <stdio.h>

int main(){
    int n,a,b;
    scanf("%d %d %d",&n, &a, &b);
    if (n % a == 0 && n % b == 0){
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}