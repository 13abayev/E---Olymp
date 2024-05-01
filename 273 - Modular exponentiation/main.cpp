//With recursion
#include <iostream>
using namespace std;

int ModularExponential(long long x, long long n, long long m, long long result){
    if(n <= 0){
        return result;
    }
    if (n % 2 == 1){
        result = (result * x) % m;
    }
    n /= 2;
    x = (x * x) % m;
    return ModularExponential(x, n, m, result);
}

int main(){
    long long x, n, m;
    cin >> x >> n >> m;
    cout << ModularExponential(x, n, m, 1) << endl;
}