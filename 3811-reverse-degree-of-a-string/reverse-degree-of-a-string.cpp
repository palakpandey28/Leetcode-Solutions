class Solution {
public:
    int reverseDegree(string s) {
        int product = 1;
        int sum =0;
        for(int i =0;i<s.size();i++){
           product = (i+1)*(26-(s.at(i)-'a'));
           sum = sum+ product;
        }
        return sum;
    }
};