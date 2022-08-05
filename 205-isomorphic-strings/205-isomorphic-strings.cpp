class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> maps, mapt;
        for(int i = 0; i < s.size(); i++){
            if((not maps[s[i]]) and (not mapt[t[i]])){
                maps[s[i]] = t[i];
                mapt[t[i]] = s[i];
            } else if((maps[s[i]] != t[i]) or (mapt[t[i]] != s[i])){
                return false;
            }
        }
        return true;
    }
};