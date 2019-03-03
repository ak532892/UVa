// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    int M = P.size();
    vector<int> ans;
    int num[200] = {};
    num['A'] = 1;
    num['C'] = 2;
    num['G'] = 3;
    num['T'] = 4;
    for(int i = 0; i < M; i++){
        int imf = 4;
        for(int j = P[i]; j <= Q[i]; j++){
            if(num[S[j]] < imf){
                imf = num[S[j]];
                if(imf == 1)
                    break;
            }
        }
        ans.push_back(imf);
    }
    return ans;
}
// 66%, count the number