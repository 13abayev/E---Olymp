#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    int min = 101;
    for(int i = 0 ;i < n; i++){
        scanf("%d", &nums[i]);
        if(nums[i] < min){
            min = nums[i];
        }
    }

    for(int i = 0 ; i < n; i++){
        if(nums[i] == min){
            int temp = nums[i], holder;
            for(int j = 0; j <= i; j++){
                holder = nums[j];
                nums[j] = temp;
                temp = holder;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }
}
