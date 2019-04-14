class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n[26] = {};
        
        for(auto c : name)
            n[c-'a']++;
        for(auto c : typed)
            if(!n[c-'a'])
                return false;
        for(int i = 0, j = 0; i < name.size(); ++i, ++j){
            while(typed[j] != name[i]){
                ++j;
                if(j > typed.size())
                    return false;
            }
        }
        return true;
    }
};
//test case "alex", "daaleex"