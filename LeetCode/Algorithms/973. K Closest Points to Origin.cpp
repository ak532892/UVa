int cmp(vector<int> a, vector<int> b){
    return a[0]*a[0]+a[1]*a[1] < b[0]*b[0]+b[1]*b[1];
}
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        sort(points.begin(), points.end(), cmp);
        points.erase(points.begin() + K + 1, points.begin() + size(points) + 1);
        return points;
    }
};
//sort by distance, priority_queue, partial_sort, nth_element, multimap