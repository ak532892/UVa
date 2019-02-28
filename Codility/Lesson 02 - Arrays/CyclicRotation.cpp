// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int size = A.size();
    if(size == 0) return A;
    vector<int> ans;
    K %= size;
    for(int i = size-K; i < size; i++)
        ans.push_back(A[i]);
    for(int i = 0; i < size-K; i++)
        ans.push_back(A[i]);
    return ans;
}