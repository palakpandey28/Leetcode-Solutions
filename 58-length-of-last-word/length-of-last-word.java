class Solution {
    int count = 0;
    
    public int lengthOfLastWord(String s) {
        int j = s.length()-1;
           for(int i = s.length()-1;i>=0;i--){
                
              if((s.charAt(j)==' ')&&(j>=0)){
                j--;
                continue;
                
              }
              
                  if((s.charAt(i)!=' ')){
                    count++;
                }
                else{
                    return count;
                }
              

               
             }
              return count;
    }
}