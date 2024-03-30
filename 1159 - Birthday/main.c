#include<stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    int month;
    int day;
    for(int i = 1; i<= 12; i++){
        for(int j = 1; j<= 31; j++){
            if (j * 12 + i * 31 == a){
                if(j < 10){
                    printf("0%d/",j);
                }
                else if(j >= 10){
                    printf("%d/",j);
                }
                if(i < 10){
                    printf("0%d",i);
                }
                else if(i >= 10){
                    printf("%d",i);
                }
                return 0;
            }
        }
    }
    return 0;
}
