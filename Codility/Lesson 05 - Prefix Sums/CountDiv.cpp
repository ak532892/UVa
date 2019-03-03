// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int n1 = 0, zero = 0;
    if(A == 0)  zero++;
    for(int i = 1; ; i++){
        if((n1 == 0) && (K*i >= A))
            n1 = i;
        if(K*i > B)
            return i-n1+zero;
    }
}
// 75%, formula