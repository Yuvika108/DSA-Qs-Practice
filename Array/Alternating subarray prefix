#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> v(n);
	    for(int i=0; i<n; i++){
	        cin >> v[i];
	    }
	    
	    vector<int> ans(n);
	    int count = 1;
	    ans[n-1]=1;
	    
	    for(int i=n-2; i>=0; i--){
	        if((v[i]>0 && v[i+1]<0) || (v[i]<0 && v[i+1]>0)){ 
	            count++;
	            ans[i]=ans[i+1]+1;
	        }
	        else{ 
	            ans[i]=1;
	        }
	        
	    }
	    
	    for(int i=0; i<n; i++){
	        cout << ans[i] << " ";
	    }
	    cout << endl;
	}
    
    return 0;
}
