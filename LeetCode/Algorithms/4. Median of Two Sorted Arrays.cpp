class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sortList;
        int n1 = 0, n2 = 0;
        
        while((n1 < nums1.size()) && (n2 < nums2.size())){
            if(nums1[n1] < nums2[n2]){
                sortList.push_back(nums1[n1]);
                n1++;
            }
            else{
                sortList.push_back(nums2[n2]);
                n2++;
            }
        }
        if(n1 == nums1.size()){
            while(n2 < nums2.size())
                sortList.push_back(nums2[n2++]);
        }
        if(n2 == nums2.size()){
            while(n1 < nums1.size())
                sortList.push_back(nums1[n1++]);
        }
        if(sortList.size() % 2)
            return sortList[sortList.size()/2];
        else
            return (sortList[sortList.size()/2-1] + sortList[sortList.size()/2])/2.;
    }
};
//Recursive 