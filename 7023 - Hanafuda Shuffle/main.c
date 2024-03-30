#include <stdio.h>

int main(){
    int n,r,p,c,tmp;

    while(1){
        scanf("%d %d",&n, &r);
        if(n == 0 && r == 0){
            break;
        }
        int A[n + 1];
        A[0] = 0;
        for (int i = 1; i <= n; i++){
            A[i] = n - i + 1;
        }
        for (int i = 0; i < r; i++){
            scanf("%d %d", &p, &c);
            int B[c];
            for (int j = 0; j < c; j++){
                B[j] = A[p+j];
            }
            for (int j = p - 1; j >= 1; j--){
                A[j + c] = A[j];
            }
            for (int j = 0; j < c; j++){
                A[j + 1] = B[j];
            }
        }
        printf("%d\n", A[1]);
    }
}