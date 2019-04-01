class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        unordered_map<string, int> m;
        int ans = 0;
        for(auto s : A){
            int c[52] = {};
            for(int i = 0; i < s.size(); i++)
                c[s[i]-'a' + 26*(i%2)]++;
            string rec = "";
            for(int i = 0; i < 52; i++)
                rec += c[i];
            if(!m[rec]){
                m[rec] = 1;
                ans++;
            }
        }
        return ans;
    }
};