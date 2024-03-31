#include <stdio.h>

int main(){
    char buf[1024];
    int count = 0;
    gets(buf);
    int i = 0 ;
    while(buf[i] != '\0'){
        if (buf[i] == 'a'){
            printf("%c", buf[i]);
            count++;
        }
        i++;
    }
    if(count == 0){
        printf("-1");
    }
    
}