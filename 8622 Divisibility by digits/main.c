#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    if ( n <= 0){
        n*= -1;
    }
    int A[] = {n/1000, n/100%10, n/10%10, n%10};

    for (int i = 0; i < 4; i++){
        if (A[i] != 0 && n % A[i] != 0){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}