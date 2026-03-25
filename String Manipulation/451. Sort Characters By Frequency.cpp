class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char,int> freq;
        int n=s.length();

        string ans="";

        for(char c:s){
            freq[c]++;
        }

        vector<pair<char,int>> v;
        unordered_map<char,bool> visited;

        for(char c:s){
            if(!visited[c]){
                v.push_back({c, freq[c]});
                visited[c]=true;
            }
        }

        sort(v.begin(), v.end(), [](pair<char,int> a, pair<char,int> b){
            return a.second>b.second;
        });
        
        for(auto p:v) ans+=string(p.second,p.first);

        return ans;
    }
};
