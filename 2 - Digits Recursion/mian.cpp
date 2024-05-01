#include <iostream>
using namespace std;

int Divider(int n){
    if(n == 0){
        return 0;
    }
    int result = 1 + Divider(n/10);
    return result;
}

int main(){
    int n;
    cin >> n;
    if (n == 0){
        cout << 1 << endl;
        return 0;        
    }
    cout << Divider(n) << endl;
}