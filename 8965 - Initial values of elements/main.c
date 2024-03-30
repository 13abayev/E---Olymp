#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    int min = 101;
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
        if(nums[i] < min){
            min = nums[i];
        }
    }
    for(int i = 0; i < n; i++){
        nums[i] -= min / 2;
        printf("%d ", nums[i]);
    }
}
