#include <stdio.h>

int main(){
    int i = 0;
    char s[1024];
    gets(s);
    while(s[i] != '\0'){
        if (s[i] == 'a' && s[i + 1] != '\0' && s[i + 1] == 'b'){
            printf("ups");
            i++;
        }
        else{
            printf("%c",s[i]);
        }
        i++;
    }
}