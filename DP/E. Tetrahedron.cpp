#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;

int main() {
    long long n;
    cin >> n;
    
    long long d = 1;
    long long abc = 0;
    
    for(int i=1; i<=n; i++){
        long long new_d = abc%MOD;
        long long new_abc = (3*d%MOD + 2*abc%MOD) % MOD;
        
        d = new_d;
        abc = new_abc;
    }
    
    cout << d%MOD;
    
    return 0;
}
