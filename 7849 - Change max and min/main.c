#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    int maks = -101, min = 101;
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
        if (nums[i] > maks){
            maks = nums[i];
        }
        if (nums[i] < min){
            min = nums[i];
        }
    }
    for(int i = 0; i < n; i++){
        if (nums[i] == maks){
            nums[i] = min;
        }
        else if (nums[i] == min){
            nums[i] = maks;
        }
        printf("%d ", nums[i]);
    }

}
