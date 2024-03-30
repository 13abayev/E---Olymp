#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    int k = 0;
    int val;
    for(int i = 0; i < n; i++){
        scanf("%d", &val);
        if (val != 0){
            nums[k++] = val;
        }
    }
    for(int i = k; i < n;i++){
        nums[i] = 0; 
    }
    
    for(int i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }
}
