class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long sum=0;
        long maxi = 0;
        int left = 0;
        unordered_map<int,int>mpp;
        for(int right =0;right<n;right++){
            mpp[nums[right]]++;
            sum = sum+nums[right];

            if((right - left + 1)>k){
                mpp[nums[left]]--;
                sum = sum - nums[left];
                

                if(mpp[nums[left]]==0){
                    mpp.erase(nums[left]);
                }

                left++;

            }

            if((right-left+1)==k && mpp.size()==k){
                maxi = max(sum,maxi);
            }
        }
        return maxi;
    }
};