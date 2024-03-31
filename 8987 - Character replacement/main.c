#include <stdio.h>

int main(){
    char s[1024];
    int i = 0;
    gets(s);
    while(s[i] != '\0'){
        if(s[i] == 'a'){
            printf("b");
        }
        else if(s[i] == 'b'){
            printf("a");
        }
        else{
            printf("%c", s[i]);
        }
        i++;
    }
}