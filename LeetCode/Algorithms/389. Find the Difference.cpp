class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[256] = {};
        for(auto i:s)
            arr[i]++;
        for(auto i:t)
            arr[i]--;
        for(int i = 0; i < 256; i++)
            if(arr[i])  return (char)i;
        return NULL;
    }
};
//combine loop, XOR