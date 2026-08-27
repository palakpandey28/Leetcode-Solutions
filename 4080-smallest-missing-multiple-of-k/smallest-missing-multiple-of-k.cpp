class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
          set<int>sett;
for(int i =0;i<nums.size();i++){
    sett.insert(nums[i]);
}
int ans =k;
while(sett.count(ans)){
    ans = ans+k;
}

return ans;
    }
};