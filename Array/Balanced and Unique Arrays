#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin >> t;
	while(t--){
	    // interesting --> A=B=N/2
	    // ith prefix sum of A != ith prefix sum of B
	    
	    ll n;
	    cin >> n;
	    
	    if(n%4!=0){
	        cout << "NO \n";
	        continue;
	    }
	    
	    vector<ll> A,B;
	    
	    for(ll i=1; i<=n/2; i+=2) A.push_back(i);
	    for(ll i=2; i<=n/2; i+=2) B.push_back(i);
	    
	    for(ll i=n; i>n/2; i-=2) A.push_back(i);
	    for(ll i=n-1; i>n/2; i-=2) B.push_back(i);
	    
	    cout << "Yes \n";
	    for(ll i : A) cout << i << " ";
	    cout << "\n";
	    for(ll i : B) cout << i << " ";
	    cout << "\n";
	}
	
    return 0;
}
