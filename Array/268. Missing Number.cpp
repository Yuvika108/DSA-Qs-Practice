class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int expected_sum=n*(n+1)/2;
        int actual_sum=0;
        
        for(int i=0; i<n; i++){
            actual_sum=actual_sum+nums[i];
        }
        
        //cout << " Expected Sum: " << expected_sum << endl;
        //cout << " Actual Sum: " << actual_sum << endl;
        
        int result= expected_sum - actual_sum;
        
        return result;
    }
};
