// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    bool m[X+1] = {};
    int size = A.size();
    for(int i = 0; i < size; i++){
        if(m[A[i]] == false){
            m[A[i]] = true;
            X--;
        }
        if(X == 0)
            return i;
    }
    return -1;
}