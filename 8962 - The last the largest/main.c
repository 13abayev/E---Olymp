#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    int max = -101;
    int index = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
        if(nums[i] >= max){
            max = nums[i];
            index = i;
        }
    }
    int temp = nums[n-1];
    nums[n-1] = max;
    nums[index] = temp;
    for(int i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }
}
