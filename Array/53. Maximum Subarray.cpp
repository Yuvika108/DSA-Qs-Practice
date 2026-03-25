class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxVal=INT_MIN;

        for(auto i: nums){
            sum=sum+i;
            maxVal=max(maxVal, sum);
            if(sum<0) sum=0;
        }
        
        return maxVal;
    }
};
