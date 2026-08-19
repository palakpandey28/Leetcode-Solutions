class Solution {
public:
      vector<int>temp;
    void rotate(vector<int>& nums, int k) {
            temp.resize(nums.size());
            for(int i =0;i<nums.size();i++){
                temp[(i+k)%nums.size()]=nums[i];
              }

             nums=temp;
}
    
};