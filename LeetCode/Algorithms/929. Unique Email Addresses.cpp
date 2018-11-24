class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> filter;
        
        for(auto email: emails){
            for(int i = 0; email[i]!='@'; i++){
                if(email[i]=='.'){
                    email.erase(email.begin()+i);
                    i--;
                }
                if(email[i]=='+'){
                    int first = i;
                    while(email[i]!='@'){
                        i++;
                    }
                    email.erase(email.begin()+first, email.begin()+i);
                    break;
                }
            }
            filter.insert(email);
        }
        return filter.size();
    }
};
/*
unordered_set, find
*/