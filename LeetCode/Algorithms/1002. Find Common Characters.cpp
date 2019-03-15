class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int rec[26][150] = {};
        vector<string> ans;
        
        for(int i = 0; i < A.size(); i++){
            for(int j = 0; j < A[i].size(); j++)
                rec[A[i][j]-'a'][i]++;
        }
        for(int i = 0; i < 26; i++){
            int m = 200;
            for(int j = 0; j < A.size(); j++){
                if(rec[i][j] < m)
                    m = rec[i][j];
            }
            while(m--)
                ans.push_back(string(1, 'a'+i));
        }
        return ans;
    }
};
//memory