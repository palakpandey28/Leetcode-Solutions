class Solution {
public:
    bool isPalindrome(string s) {
        
       string answer = "";

for(char c : s) {
    if(isalnum(c)) {
        answer += tolower(c);
    }
}
  s= answer;
  cout<<s;

        	int n = s.size();
            int right = 0;
            int left = n-1;
            bool ans = true;
            while(right<left){
                if(s.at(right)!=s.at(left)){
                    ans = false;
                    break;
                }
                right++;
                left--;
               
            }
            
            return ans;
		
    }
};