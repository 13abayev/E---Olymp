#include <stdio.h>

int main(){
    char s[1000];
    gets(s);
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] != 'a'){
            printf("%c",s[i]);
        }
        i++;
    }
}
