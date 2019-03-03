// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int ansIndex = 0;
    double min = 10001;
    for(int i = 0; i < A.size()-1; i++){
        if(i+2 != A.size()){
            if((A[i]+A[i+1]+A[i+2])/3. < min){
                min = (A[i]+A[i+1]+A[i+2])/3.;
                ansIndex = i;
            }
        }
        if((A[i]+A[i+1])/2. < min){
            min = (A[i]+A[i+1])/2.;
            ansIndex = i;
        }
    }
    return ansIndex;
}
// https://blog.csdn.net/dear0607/article/details/42581149