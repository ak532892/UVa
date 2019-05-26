class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        double a = points[0][0] - points[1][0];
        if (a == 0)
            return points[0][1] == points[1][1] ? 0 : points[2][0] != points[1][0];
        else 
            a = (points[0][1] - points[1][1]) / a;
        double b = points[0][1] - a * points[0][0];
        return (a * points[2][0] + b) != points[2][1];
    }
};
//triangle area, calculate the slope