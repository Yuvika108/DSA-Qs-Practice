#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	
	while(t--){
	    ll n, h, y1, y2, l;
	    cin >> n >> h >> y1 >> y2 >> l;
	    
	    // n=no. of barriers, h=height of Edward, y1=duck, y2=jump, l=alchemic life force
	    
	    //h-y1 <= x
	    //y2 >= x
	    
	    //t--> barrier type, t=1 --> type1 --> duck, t=2 --> type2 --> jump
	        
    	ll count=0;
    	bool exhausted = false;
	    
	    /*
	    while(n--){   
	        ll t, x;
	        cin >> t >> x;
    	    
    	    if(t==1){
    	        if(h-y1>x){
    	            l--;
    	            if(l==0) flag=1;
    	        }
    	        if(flag==0) count++;
    	    }else if(t==2){
    	        if(y2<x){
    	            l--;
    	            if(l==0) flag=1;
    	        }
    	        if(flag==0) count++;
    	        }
    	    }
    	    cout << count << endl;
    	 */
    	 
    	 while(n--){
    	     ll t,x;
    	     cin >> t >> x;
    	     
    	     if(exhausted) continue;
    	      
    	     bool canPass=false;
    	      
    	     if(t==1){
    	         canPass = (h-y1 <= x);
    	     }else{
    	         canPass = (y2 >= x);
    	     }
    	     
    	     if(!canPass){
    	         l--;
    	         if(l==0){
    	             exhausted=true;
    	             continue;
    	         }
    	     }
    	     count++;
    	   }
    	   cout << count << endl;
	}
	
    return 0;
}
