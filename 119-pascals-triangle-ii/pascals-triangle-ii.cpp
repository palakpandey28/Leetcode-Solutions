class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>result;
       vector<vector<int>>ans;
        for(int i =0;i<=rowIndex;i++){
             vector<int>row;
            for(int j =0;j<i+1;j++){
                if(j==0||j==i){
                    row.push_back(1);
                }
                else{
                   row.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
            
            }
            ans.push_back(row);
            }

            for(int j = 0; j < ans[rowIndex].size(); j++) {
               result.push_back(ans[rowIndex][j]);
                }
         return result;
    }
};