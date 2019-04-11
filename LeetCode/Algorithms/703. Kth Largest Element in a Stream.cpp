class KthLargest {
public:
    vector<int> arr;
    int k;
    KthLargest(int k, vector<int>& nums) {
        arr = nums;
        this->k = k;
    }
    
    int add(int val) {
        arr.push_back(val);
        nth_element(arr.begin(), arr.begin()+k-1, arr.end(), greater<int>());
        return arr[k-1];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
 
 //priority_queue