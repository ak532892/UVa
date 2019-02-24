class Solution {
public:
    bool detectCapitalUse(string word) {
        int c1 = 1, c2 = 1, c3 = 1;
        
        if(!('A' <= word[0] && word[0] <= 'Z')){
            c3 = 0;
            c1 = c3;
        }
        for(int i = 1; i < word.size(); i++){
            if(c1 && !('A' <= word[i] &&  word[i] <= 'Z'))
                c1 = 0;
            if(c2 && !('a' <=  word[i] &&  word[i] <= 'z'))
                c2 = 0;
            if(c3){
                if(!('a' <=  word[i] &&  word[i] <= 'z'))
                    c3 = 0;
            }
            if(!c1 && !c2 && !c3)
                break;
        }
        return c1 || c2 || c3;
    }
};
//count, exception, first value