#include <stdio.h>

int main(){
    int  i = 0;
    char s[1024];
    gets(s);
    int res = 0;
    while(s[i] != '\0'){
        if(s[i] >= 48 && s[i] <= 57){
            res ++;
        }
        i++;
    }
    printf("%d", res);
}