class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector<int>arr(2*n);
       int i =0;
       int j = n;
       for(int k =0; k<2*n;k=k+2){
        arr[k]=nums[i];
        arr[k+1]=nums[j];
        i++;
        j++;
       } 
       return arr;
    }
};