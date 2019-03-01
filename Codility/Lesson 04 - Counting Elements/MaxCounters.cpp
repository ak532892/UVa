// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> ans(N);
    int MAX = 0, preMAX = -1;
    for(int i:A){
        if(i != (N+1))
            MAX = max(++ans[i-1], MAX);
        else{
            if(MAX != preMAX){
                for(int &i:ans)
                    i = MAX;
                preMAX = MAX;
            }
        }
    }
    return ans;
}
// 88%, update value in each visited