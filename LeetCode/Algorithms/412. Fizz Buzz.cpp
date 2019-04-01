class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);
        while(n--){
            if(!((n+1)%15))
                ans[n] = "FizzBuzz";
            else if(!((n+1)%3))
                ans[n] = "Fizz";
            else if(!((n+1)%5))
                ans[n] = "Buzz";
            else
                ans[n] = to_string(n+1);
        }
        return ans;
    }
};
//without  if-else