// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> v;
    int size = A.size();
    for(int i = 0; i < size; i++)
        if(A[i] == 0)
            v.push_back(0);
        else{
            int acc = 0;
            while(i<size && A[i]){
                acc++;
                i++;
            }
            v.push_back(acc);
            i--;
        }
    vector<int> mul;
    long long int sum = 0;
    size = v.size();
    int j = size-1;
    while(v[j] == 0)
        j--;
    for(int i = j; i >= 0; i--){
        if(v[i]){
            sum += v[i];
            mul.push_back(sum);
        }
        else{
            int zero = 0;
            while(i >= 0 && v[i]==0){
                zero++;
                i--;
            }
            mul.push_back(zero);
            i++;
        }
    }
    size = mul.size();
    sum = 0;
    long long int limit = 1000000000;
    for(int i = 0; i < size; i+=2){
        if((i+1) < size){
            if(((long long int)mul[i]*mul[i+1] + sum) > limit)
                return -1;
            sum += mul[i]*mul[i+1];
        }
    }
    return sum;
}
// one loop