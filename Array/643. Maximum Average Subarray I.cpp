class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum=0;

        for(int i=0; i<k; i++){
            sum+=nums[i];
        }
        
        int max_value=sum;

        for(int i=k; i<n; i++){
            sum=sum+nums[i]-nums[i-k];                
            max_value=max(max_value, sum);
        }
        
        return (double)max_value/k;
    }
};
