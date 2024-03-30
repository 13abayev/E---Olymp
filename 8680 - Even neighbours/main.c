#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    int count = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    for(int i = 1 ; i < n-1; i++){
        if(nums[i-1] % 2 == 0 && nums[i + 1] % 2 == 0){
            count++;
        }
    }
    printf("%d", count);
}
