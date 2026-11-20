class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>arr;
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0;
        int bottom = m-1;
        int right = n-1;
        int left = 0;

        
       while(top<=bottom && left<=right){
        for(int i = left ; i<=right;i++){
            arr.push_back(matrix[top][i]);
            
        }
        top++;
        for(int j = top;j<=bottom;j++){
            arr.push_back(matrix[j][right]);
            
        }
        right--;
       if(bottom>=top){
         for(int k = right;k>=left;k--){
            arr.push_back(matrix[bottom][k]);
           
    }
         bottom--;
       }
       if(left<=right){
         for(int l = bottom;l>=top;l--){
            arr.push_back(matrix[l][left]);
            
        }
        left++;
       }
       }
        return arr;
  }

};