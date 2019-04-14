class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0, late = 0;
        
        for(auto c : s){
            if(c == 'L'){
                late++;
                if(late >= 3)
                    return false;
            }   
            else{
                late = 0;
                if(c == 'A')   absent++; 
                if(absent >= 2)
                    return false;
            }
        }
        return true;
    }
};
//regular expression