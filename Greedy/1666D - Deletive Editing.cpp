// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
bool confirmString(string s, string t){
    unordered_map<char, int> freq;
    for(char c : t){
        freq[c]++;
    }
    
    string final_str = "";
    
    for(int i=s.length()-1; i>=0; i--){
        if(freq[s[i]]>0){
            final_str+=s[i];
            freq[s[i]]--;
        }
    }
    
    reverse(final_str.begin(), final_str.end());
    
    return final_str==t;
};
 
int main() {
    long long n;
    cin >> n;
    
    while(n--){
        string s, t;
        cin >> s >> t;
        
        bool result = confirmString(s, t);
        
        cout << (result ? "YES":"NO") << endl;
    }
 
    return 0;
}
