// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int ans = 0;
    while(N){
        int tmp = 0;
        if(N%2){
            N/=2;
            while(N%2==0 && N){
                tmp++;
                N/=2;
            }
            ans = tmp > ans ? tmp:ans;
        }
        else
            N /= 2;
    }
    return ans;
}