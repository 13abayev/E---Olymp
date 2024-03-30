#include<stdio.h>

int main() {
    int n,m;
    scanf("%d %d", &n, &m);
    for(int i = 0 ; i < m; i++){
        float avg = 0;
        int min = 11;
        int maks = 0;
        int total = 0;
        int count = 0;
        int points[n];
        for(int j = 0; j < n; j++){
            scanf("%d", &points[j]);
            // printf("%d ", points[j]);
            if(points[j] > maks){
                maks = points[j];
            }
            if(points[j] < min){
                min = points[j];
            }
        }
        for(int j = 0; j < n; j++){
            if(points[j] != maks && points[j] != min){
                total += points[j];
                count++;
            }
        }
        avg = (1.0 * total) / (1.0 * count);
        printf("%.2f ",avg);
    }
}
