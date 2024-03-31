#include <stdio.h>
#include <string.h>

int main() {
    char s[20];
    int i, j;
    gets(s);
    j = 0;
    for(i = 0; i < strlen(s); i++)
    if (s[i] != '3' && s[i] != '9') s[j++] = s[i];
    s[j] = 0;
    puts(s);
}
