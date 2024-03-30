#include<bits/stdc++.h>
using namespace std;
int main() {
    int r;
    int count = 0;
    cin >> r;
    for (int i = r; i >= -r; i--){
        for (int j = r; j >= -r; j--){
            if (i * i + j * j <= r*r){
                count ++;
            }
        }
    }
    cout << count;
}
