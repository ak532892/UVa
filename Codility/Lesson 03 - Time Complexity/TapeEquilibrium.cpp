// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int size = A.size();
    
    for(int i = 1; i < size; i++)
        A[i] += A[i-1];
    int last = A[size-1];
    int min = abs(2*A[0]-last);
    
    for(int i = 0; i < size-1; i++){
        int dif = abs(2*A[i]-last);
        if(dif < min)
            min = dif;
    }
    return min;
}