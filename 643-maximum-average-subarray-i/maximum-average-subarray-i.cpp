class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxi =INT_MIN;
        double avg = 0;
        double sum = 0;

        for(int i =0;i<k;i++){
            sum = sum+nums[i];
             
        }
        avg = sum/k;
        maxi = max(avg,maxi);

        for(int j =k;j<n;j++){
            sum = sum+nums[j]-nums[j-k];
            avg = sum/k;
            maxi = max(avg,maxi);
        }

        return maxi;

    }
};