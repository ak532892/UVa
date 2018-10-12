class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        char morseMap[26][26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> morseSet;
        
        for(string str : words){
            string morse = "";
            for(char s : str){
                morse += morseMap[s-'a'];
            }
            morseSet.insert(morse);
        }
        return morseSet.size();
    }
};
/*
unordered_set
*/