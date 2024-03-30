    #include <stdio.h>

    int main(){
        int n;
        scanf("%d",&n);
        if ((n % 2 == 0 && !(n % 3 == 0 && n < 0)) || (!(n % 2 == 0) && (n % 3 == 0 && n < 0))){
            printf("YES");
            return 0;
        }
        printf("NO");
        return 0;
    }