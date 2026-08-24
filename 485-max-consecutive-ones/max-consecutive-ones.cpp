class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int n= nums.size();
    int sum =0;
    int count= 0;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
           sum++;
        }
        if(nums[i]==0){
         count = max(sum,count);
             sum = 0;
        }
        } 

       count = max(sum,count); 

        return count;
    }
};