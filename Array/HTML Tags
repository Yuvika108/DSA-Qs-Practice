#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin >> t;
	
	while(t--){
	    string tag;
	    cin >> tag;
	    
	    ll n = tag.length();
	    bool ans = true;
	    
	    if(n<4 || tag[0]!='<' || tag[1]!='/' || tag[n-1]!='>'){ 
	        ans = false;
	    }
	    
	    for(ll i=2; i<n-1 && ans; i++){
	        if(!(islower(tag[i]) || isdigit(tag[i]))){ 
	            ans = false;
	        }
	    }
	    
	    if(ans) cout << "Success \n";
	    else cout << "Error \n";
	    
	}
	
    return 0;
}
