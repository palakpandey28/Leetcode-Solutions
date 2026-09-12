class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        int maxi =0;
        for(int i =0;i<n;i++){
           if(nums[i]==0){
            maxi= max(maxi,sum);
            sum=0;
           }
           else{
            sum =sum+nums[i];
            maxi= max(maxi,sum);

           }
        }

        return maxi;
    }
};