#include<stdio.h>
#include<math.h>

int main() {
    int n, a, b, c, d;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    int arr[n] ;
    for(int i = 0 ; i < n; i++){
        arr[i] = i + 1;
    }
    int i = a-1, j = b-1;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    i = c -1, j = d - 1;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

}
