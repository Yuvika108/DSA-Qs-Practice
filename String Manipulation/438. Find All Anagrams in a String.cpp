class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int k = p.length();

        if(n<k) return {};

        vector<char> freqS(26,0), freqP(26,0);
        vector<int> ans;

        // Build freq for p and first window of s
        for(int i=0; i<k; i++){
            freqP[p[i]-'a']++;
            freqS[s[i]-'a']++;
        }

        if(freqS==freqP) ans.push_back(0);

        //Slide the window
        for(int i=k; i<n; i++){
            freqS[s[i]-'a']++;  //add right
            freqS[s[i-k]-'a']--;    //remove left
            if(freqS==freqP) ans.push_back(i-k+1);
        }

        return ans;
    }
};
