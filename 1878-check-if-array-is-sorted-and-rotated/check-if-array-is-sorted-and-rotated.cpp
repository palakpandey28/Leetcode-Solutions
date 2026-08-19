class Solution {
public:
  int count = 0;
    bool check(vector<int>& nums) {
        for(int i = 0; i < nums.size()-1 ; i++){
            if(nums[i]>nums[i+1]){
              count++;
            }
         }

        if(nums[0]<nums[nums.size()-1]){
             count++;
         }
        if(count==1||count == 0){
            return true;
        }
        else{
           return false;
        }
} 
    
};