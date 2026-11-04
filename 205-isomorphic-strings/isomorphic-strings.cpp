class Solution {
public:
    bool isIsomorphic(string s, string t) {
            int n = s.size();
    int hash1[256];
    int hash2[256];

    for(int i =0;i<256;i++){
        hash1[i]=-1;
        hash2[i]=-1;
    }

    for(int i =0;i<n;i++){
        if(hash1[s[i]]!=hash2[t[i]]){
            return false;
        }

        hash1[s[i]]=i;
        hash2[t[i]]=i;

    }

    return true;

    }
};