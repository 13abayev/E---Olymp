#include <iostream>
using namespace std;

int Function(int n){
    if(n == 0){
        return 0;
    }
    return Function(n - 1) + n;
}

int main(){
    int n;
    cin >> n;
    cout << Function(n) << endl;
}