class Solution {
public:
    bool isSubsequence(string s, string t) {
        int find = 0;
        for(int i = 0; i < t.size(); i++){
            if(s[find] == t[i]){
                find++;
            }
        }
        if(find != s.size()){
            return false;   
        }
        return true;
    }
};