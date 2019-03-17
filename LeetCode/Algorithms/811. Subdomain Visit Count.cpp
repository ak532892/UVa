class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<string> ans;
        map<string, int> rec;
        
        for(auto s:cpdomains){
            int num;
            istringstream sin(s);
            sin>>num;
            string t = "";
            for(int i = s.size()-1; s[i] != ' '; i--){
                if(s[i] == '.'){
                    if(rec.find(t) != rec.end())
                        rec[t] += num;
                    else
                        rec[t] = num;
                }
                t = s[i] + t;
            }
            if(rec.find(t) != rec.end())
                rec[t] += num;
            else
                rec[t] = num;
        }
        for(auto i = rec.begin(); i != rec.end(); i++)
            ans.push_back(to_string(i->second) + " " + i->first);
        return ans;
    }
};
//unordered_map, substr 