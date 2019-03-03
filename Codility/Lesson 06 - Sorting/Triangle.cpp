// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <algorithm>
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    int i = 0, size = A.size();
    while((i < size-2) && (A[i] < 0))i++;
    for(; i < size-2; i++){
        if((long long int)(A[i])+A[i+1] > A[i+2])
            return 1;
    }
    return 0;
}