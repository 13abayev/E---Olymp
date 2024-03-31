#include <stdio.h>

int main(){
    int  i = 0;
    char s[1024];
    gets(s);
    while(s[i] != '\0'){
        if(s[i] >= 97 &&  s[i] <= 122){
            printf("%c", s[i]);
        }
        printf("%c", s[i]);
        i++;
    }
}