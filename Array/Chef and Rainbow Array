#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int ispalin(int a[], int n){
    for(int i=0; i<n/2; i++){
        if(a[i]!=a[n-i-1]) return 0;
    }
    return 1;
}

int main() {
    ll t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        
        int f=0, z=1, w=0;
        for(int i=0; i<n; i++){
            if(a[i]>7){
                f=1;
                break;
            }
        }
        
        for(int i=0; i<n; i++){
            if(a[i]>z && a[i]!=(z+1)){
                f=1;
                break;
            }
            else if(a[i]==7){
                z++;
                break;
            }
            else if(a[i]>z && a[i]==(z+1)) z++;
            else if(a[i]<z && z<7){
                f=1;
                break;
            }
        }
        
        if(f==1 || z<7) cout << "no\n";
        else{
            if(ispalin(a,n)==1) cout << "yes\n";
            else cout << "no\n";
        }
        
    }
    
    return 0;
}
