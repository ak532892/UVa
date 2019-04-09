class Solution {
public:
    bool rotateString(string A, string B) {
        int size = A.size(), size2 = B.size();
        if(size != size2)
            return false;
        for(int i = 0; i < size; i++){
            if(B == (A.substr(i, size-1)+A.substr(0, i)))
                return true;
        }
        return A==B ? true:false;
    }
};
//string.find, substring, Rolling Hash, KMP 