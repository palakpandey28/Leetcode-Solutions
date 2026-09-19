class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;

        }

        int hash[26]={0};

        for(int i =0;i<s.size();i++){
            hash[s.at(i)-'a']++;
            hash[t.at(i)-'a']--;
        }

        for(int j =0;j<26;j++){
            if(hash[j]!=0){
                return false;
            }
        }

        return true;
        
    }
};