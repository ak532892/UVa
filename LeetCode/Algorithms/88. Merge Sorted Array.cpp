class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> l(nums1.begin(), nums1.begin()+m);
        l.emplace_back(INT_MAX);
        nums2.emplace_back(INT_MAX);
        
        int idxL = 0, idxR = 0;
        for(int i = 0; i < m+n; ++i){
            if(l[idxL] <= nums2[idxR]){
                nums1[i] = l[idxL];
                idxL++;
            }
            else{
                nums1[i] = nums2[idxR];
                idxR++;
            }
        }
    }
};
// end to head