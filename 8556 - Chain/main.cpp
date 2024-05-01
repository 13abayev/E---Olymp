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
    res[n - 1] = 0;

    int last;
    int count;
    for(int i = n - 2; i >= 0; i--){
        int j = i + 1;
        while(j < n - 1 && stack[j] < stack[i]){
            j++;
        }
        if(stack[j] > stack[i]){
            res[i] = res[j] + 1;
        }
    }
    for(int i = 0 ; i < n; i++){
        cout << res[i] << " ";
    }
}