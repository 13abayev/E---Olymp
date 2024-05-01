#include <iostream>
using namespace std;

int Function(int m, int n){
    if(m == 0){
        return 1;
    }
    if(n == m){
        return 1;
    }
    return Function(m - 1, n - 1) + Function(m, n - 1);
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << Function(m, n) << endl;
}