#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    int count = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
        if(nums[i] > 0){
            count++;
        }
    }
    if(count == 0){
        printf("NO");
        return 0;
    }
    printf("%d\n",count);
    for(int i = 0 ; i < n; i++){
        if(nums[i] > 0){
            printf("%d ", nums[i]);
        }   
    }
}

