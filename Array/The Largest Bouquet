#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// bouquet --> either same tree or same color
	// shouldn't have even numbers of leaves
	
	//output --> maximum number of leaves for bouquet
	
	ll t;
	cin >> t;
	
	while(t--){
	    ll M_G, M_Y, M_R;
	    cin >> M_G >> M_Y >> M_R;
	    
	    ll O_G, O_Y, O_R;
	    cin >> O_G >> O_Y >> O_R;
	    
	    ll P_G, P_Y, P_R;
	    cin >> P_G >> P_Y >> P_R;
	    
	    ll count = 0;
	    
	    ll sum_T_M = M_G + M_Y + M_R;
	    ll sum_T_O = O_G + O_Y + O_R;
	    ll sum_T_P = P_G + P_Y + P_R;
	    
	    ll sum_L_G = M_G + O_G + P_G;
	    ll sum_L_Y = M_Y + O_Y + P_Y;
	    ll sum_L_R = M_R + O_R + P_R;
	    
	    vector<ll> v={sum_L_R, sum_L_Y, sum_L_G, sum_T_P, sum_T_O, sum_T_M};
	    
	    ll max_val = 0;
	    
	    for(auto x:v){
	        if(x%2==0) x--;
	        max_val=std::max(max_val, x);
	    }
	    
	    cout << max_val << endl;
	}
	
	return 0;
}
