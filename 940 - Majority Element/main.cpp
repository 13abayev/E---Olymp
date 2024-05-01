#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    int num;
    for(int i = 0; i < n; i++){
        cin >> num;
        v.push_back(num);
    }
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(v[i] == v[j]){
                count++;
            }
            if(count > n/2){
                cout << v[i];
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}