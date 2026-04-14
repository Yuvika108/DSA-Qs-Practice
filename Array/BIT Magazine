#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    
	    vector<int> v(b);
	    long long sum = 1LL*a*(a+1)/2;
	    if(a%2==1){
	        a++;
	    }
	    
	    for(int i=0; i<b; i++){
	        cin >> v[i];
	        sum = sum - v[i];
	    }
	    
	    int c;
	    cin >> c;
	    
	    int n=a/2;
	    
	    double ans = 1.0*sum*(n-c)/n;
	    
	    cout << fixed << setprecision(4) << ans << "\n";
	    
	}
	
    return 0;
}
