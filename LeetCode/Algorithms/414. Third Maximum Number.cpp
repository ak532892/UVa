class Solution {
public:
    int thirdMax(vector<int>& nums) {
        priority_queue<int, vector<int>, less<int>> q;
        
        for(auto i:nums)
            q.emplace(i);
        int n = q.top(), count = 1, M = q.top();
        q.pop();
        while(!q.empty()){
            if(n != q.top()){
                count++;
                n = q.top();
                if(count == 3)
                    return n;
            }
            q.pop();
        }
        return M;
    }
};
//set, O(n) compare