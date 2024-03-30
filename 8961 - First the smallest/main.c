#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    int min = 101;
    int index = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
        if(nums[i] < min){
            min = nums[i];
            index = i;
        }
    }
    int temp = nums[0];
    nums[0] = nums[index];
    nums[index] = temp;
    for(int i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }
}
