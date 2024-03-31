#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int a,b;
    a = b = -1;
    for(int i = 0; i < s.size() ; i++){
        if (s[i] == ' '){
            if (a == -1) a = i;
            b = i;
        }
    }
    if (a == -1) printf("-1\n");
    else printf("%d %d\n", a, b);
}