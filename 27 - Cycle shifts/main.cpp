#include <iostream>
#include <math.h>

using namespace std;

int counter(int n){
    int count = 0;
    while(n != 0){
        count ++;
        n /= 2;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int maks = n;
    int count = counter(n);
    for (int i = 0 ; i < count; i++){
        if (count == counter(n)){
            n = n - (int)(pow(2, count - 1));
            n = n << 1;
            n += 1;
        }
        else {
            n = n << 1;
        }
        if (n > maks){
            maks = n;
        }
        cout << counter(n) << endl;
        cout << n << endl;
    }
    cout << maks;
}