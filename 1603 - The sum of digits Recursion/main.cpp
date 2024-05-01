#include <iostream>
using namespace std;

int Add(int n){
    if(n == 0){
        return 0;
    }
    return n % 10 + Add(n / 10);
}

int main(){
    int n;
    cin >> n;
    if(n < 0){
      n *= -1;
    }
    cout << Add(n) << endl;
}