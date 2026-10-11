class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){ 
            return false;
    }
        int n = s.size();
        
        bool ans = false;
        for(int i=0;i<n;i++){
            string rotate = "";
            for(int j = 0;j<n;j++){
                rotate=rotate+s[(j+i)%n];
            }
            if(rotate==goal){
                ans = true;
            }
        }
        if(ans){
            return true;
        }
        else{
            return false;
        }

    }
};