class Solution {
public:
    void reverseString(vector<char>& s) {
        char tmp;
        for(int i =0, j = s.size()-1; i < j; i++,j--){
            tmp  = s[i];
            s[i] = s[j];
            s[j] = tmp;
        }
    }
};
