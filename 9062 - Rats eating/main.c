#include <stdio.h>

int main(){
    int n,k;
    scanf("%d  %d", &n, &k);
    int val;
    int sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &val);
        sum += val;
        if(sum == k){
            printf("%d",k);
            return 0;
        }
    }
    printf("%d",k-1);
}

