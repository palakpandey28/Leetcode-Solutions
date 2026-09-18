class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int>st;
        for(int x:nums){
            st.insert(x);
        }
        int s = st.size();

        if(s==n){
            return false;
        }
        else{
            return true;
        }

    }
};