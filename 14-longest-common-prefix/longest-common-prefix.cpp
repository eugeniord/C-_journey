class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";
        
        string pref = strs[0];

        for (int i = 1; i < strs.size(); ++i)
        {
            while (strs[i].find(pref) != 0){
                pref = pref.substr(0, pref.size() - 1);
                if (pref == "") return "";
            }
        }
        return pref;
    }
};