class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size(), res = 0, begin = 0, end = size-1;
        if(size == 1 && flowerbed[0] == 0)  ++res;
        while(begin < size && flowerbed[begin] == 0) ++begin;
        if(begin < size){
            while(0 <= end && flowerbed[end] == 0) --end;
            res += (begin)/2 + (size-1-end)/2;
        }
        else
            res += (begin+1)/2;
        
        while(begin < end){
            if(flowerbed[begin] == 0){
                int tmp = 0;
                while(flowerbed[begin+tmp] == 0){
                    ++tmp;
                }
                res += (tmp-1)/2;
                begin += tmp;
            }
            else    ++begin;
        }
        return res >= n;
    }
};
//scan adjacent, count 0