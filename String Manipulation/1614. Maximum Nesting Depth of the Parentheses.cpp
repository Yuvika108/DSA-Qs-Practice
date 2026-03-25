class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int max_depth=0;
        for(char c:s){
            if(c=='('){ 
                st.push(c);
                max_depth=max(max_depth, (int) st.size());
            }
            else if (c==')') st.pop();
        }

        return max_depth;
    }
};
