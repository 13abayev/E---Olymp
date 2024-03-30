#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    int max = -101, min = 101;
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
        if(nums[i] > max){
            max = nums[i];
        }
        if(nums[i] < min){
            min = nums[i];
        }
    }
    printf("%d", max - min);
}

