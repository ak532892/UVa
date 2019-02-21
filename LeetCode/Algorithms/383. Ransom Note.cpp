class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int c1[26] = {};
        int c2[26] = {};
        
        for(char c:ransomNote)
            c1[c-'a']++;
        for(char c:magazine)
            c2[c-'a']++;
        for(int i = 0; i < 26; i++)
            if(c1[i] > c2[i])
                return false;
        return true;
    }
};
//one array, unordered_map