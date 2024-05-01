#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int stack[n];
    for(int i = 0; i < n; i++){
        cin >> stack[i];
    }
    int res[n];
    res[0] = -1;

    for(int i = 1; i < n; i++){
        bool cv = true;
        for(int j = i - 1; j >= 0; j--){
            if(stack[j] > stack[i]){
                res[i] = j;
                cv = false;
                break;
            }
        }
        if(cv){
            res[i] = -1;
        }
    }
    for(int i = 0; i < n; i++){
        cout << stack[i] << " ";
    }
    return 0;
}