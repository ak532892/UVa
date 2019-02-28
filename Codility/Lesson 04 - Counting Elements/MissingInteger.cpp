// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    bool rec[1000005] = {};
    for(auto i:A){
        if(i>0)
            rec[i] = true;
    }
    for(int i = 1; i < 1000005; i++)
        if(!rec[i])
            return i;
}