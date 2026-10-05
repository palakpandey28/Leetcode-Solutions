class Solution {
public:
    string largestOddNumber(string num) {
       
          for(int i =num.size()-1 ; i>=0;i--){
          if(num.at(i)%2==0){
            num.erase(i);
          }
          else{
            break;
          }
       }
       if(num[0]=='0'){
         num= num.erase(0, 1);
           return num;
       }
       else{
        return num;
       }
    }
};