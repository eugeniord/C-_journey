class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        map<char, int> count;

        for (int i = 0; i < s.length(); ++i){
            count[s[i]]++;
            count[t[i]]--;
        }

        for (auto counts : count)
            if (counts.second) return false;
        return true;
    }
};