class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n+1, 0);
        vector<int>ans;
        for(int i =0;i<n;i++){
            hash[nums[i]]++;
        }
        for(int j =1;j<=n;j++){
            if(hash[j]==2){
                ans.insert(ans.end(),j);
            }
            
        }
           for(int j =1;j<=n;j++){
            
             if(hash[j]==0){
                ans.insert(ans.end(),j);
            }
        }

        return ans;
    }
};