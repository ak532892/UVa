// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <algorithm>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    
    return max(A[A.size()-1]*A[A.size()-2]*A[A.size()-3], A[0]*A[1]*A[A.size()-1]);
}