    #include <stdio.h>

    int main(){
        int n;
        scanf("%d",&n);
        int flag = 0;
        if (n % 2 != 0){
            printf("YES");
            return 0;
        }
        if (n >= 100 && n <= 999){
            printf("YES");
            return 0;
        }
        printf("NO");
        return 0;
    }