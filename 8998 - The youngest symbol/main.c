#include <stdio.h>

int main(){
    int  i = 0;
    char s[1024];
    gets(s);
    int min = 123;
    int count;
    while(s[i] != '\0'){
        if(s[i] < min){
            min = s[i];
            count = 1;
        }
        else if(s[i] == min){
            count ++;
        }
        i++;
    }
    printf("%c %d", min, count);
}