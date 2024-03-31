#include <stdio.h>

int main(){
    int i = 0;
    char s[1000];
    gets(s);
    while(s[i] != '\0'){
        if(s[i] == 'a'){
            printf("aa");
        }
        else if(s[i] == 'e'){
            printf("ee");
        }
        else if(s[i] == 'i'){
            printf("ii");
        }
        else if(s[i] == 'o'){
            printf("oo");
        }
        else if(s[i] == 'u'){
            printf("uu");
        }
        else if(s[i] == 'y'){
            printf("yy");
        }
        else{
            printf("%c", s[i]);
        }
        i++;
    }
}