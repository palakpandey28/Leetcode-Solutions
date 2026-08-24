class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
         int target =0;
    while(target<=n){
         bool found =false; 
     for(int i = 0;i<n;i++){
        if(target==nums[i]){
            found = true;
            break;
        }
       }
       if(found==false){
        return target;
        break;
       }

       else{
        target++;
       }
     
    }
    return target ;
    }
};