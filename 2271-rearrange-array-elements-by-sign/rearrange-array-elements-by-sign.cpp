class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr;
        vector<int>pos;
        vector<int>neg;

        for(int i =0;i<n;i++){
           if(nums[i]>0){
            pos.push_back(nums[i]);
           } 
           else{
            neg.push_back(nums[i]);
           }
        }

        int i = 0;
        int j = 0;
        arr.push_back(pos[i]);
        i++;
        for(int k =1;k<n;k++){
            if(arr[k-1]>0){
                arr.push_back(neg[j]);
                j++;
            }
            else{
                arr.push_back(pos[j]);
                i++;
            }
        }

        return arr;
    }
};