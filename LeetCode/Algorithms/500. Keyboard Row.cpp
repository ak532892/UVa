class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        char str1[] = "QWERTYUIOP", str2[] = "ASDFGHJKL", str3[] = "ZXCVBNM";
        vector<string> ans;
        for(auto it = words.begin(); it != words.end(); it++){
            int i;
            for(i = 0; i < words[it - words.begin()].size(); i++){
                int flag = 0;

                for(int j = 0; j < strlen(str1); j++){
                    if(toupper(it[0][i]) == str1[j]){
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0)
                    break;
            }
            if(i == words[it - words.begin()].size()){
                ans.push_back(*it);
                continue;
            }

            for(i = 0; i < words[it - words.begin()].size(); i++){
                int flag = 0;

                for(int j = 0; j < strlen(str2); j++){
                    if(toupper(it[0][i]) == str2[j]){
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0)
                    break;
            }
            if(i == words[it - words.begin()].size()){
                ans.push_back(*it);
                continue;
            }

            for(i = 0; i < words[it - words.begin()].size(); i++){
                int flag = 0;

                for(int j = 0; j < strlen(str3); j++){
                    if(toupper(it[0][i]) == str3[j]){
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0)
                    break;
            }
            if(i == words[it - words.begin()].size()){
                ans.push_back(*it);
                continue;
            }
        }
        return ans;
    }
};
/*
SUBSET, MAP, find_first_of
*/