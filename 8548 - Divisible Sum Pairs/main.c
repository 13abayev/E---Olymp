#include<stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int nums[n];
    int count = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    for(int i = 0 ; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if((nums[i] + nums[j]) % k == 0){
                count ++;
            }
        }
    }
    printf("%d", count);
}
