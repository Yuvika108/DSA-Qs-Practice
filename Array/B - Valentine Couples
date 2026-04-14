#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);

	ll t;
	cin >> t;
	
	while(t--){
	    ll n;
	    cin >> n;
	    
	    vector<ll> A(n), B(n);
	    for(int i=0; i<n; i++) cin >> A[i];
	    for(int i=0; i<n; i++) cin >> B[i];
	    
	    sort(A.begin(), A.end());
	    sort(B.begin(), B.end());
	    
	    
	    ll mx = LLONG_MIN;
	    
	    for(int i=0; i<n; i++){
	        mx = max(mx, A[i]+B[n-i-1]);
	    }
	    
	    cout << mx << endl;
	}
	
    return 0;
}
