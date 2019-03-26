class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string, int> m;
        vector<string> ans;
        string t;
        stringstream ss(A);
        ss<<A;
        while(ss>>t){
            if(!m[t])
                m[t] = 1;
            else 
                m[t]++;
        }
        ss.clear();
        ss<<B;
        while(ss>>t){
            if(!m[t])
                m[t] = 1;
            else 
                m[t]++;
        }
        for(auto i:m){
            if(i.second==1)
                ans.push_back(i.first);
        }
        return ans;
    }
};
// token, combined