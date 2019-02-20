class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        int count = 0, size = row.size();
        for(int i = 0; i < size-1; i+=2){
            if(!(row[i]%2) && row[i+1] == row[i]+1);
            else if(row[i]%2 && row[i+1] == row[i]-1);
            else{
                if(!(row[i]%2)){
                    for(int j = i+1; j < size; j++)
                        if(row[j] == row[i]+1){
                            swap(row[j], row[i+1]);
                            break;
                        }
                }
                else{
                    for(int j = i+1; j < size; j++)
                        if(row[j] == row[i]-1){
                            swap(row[j], row[i+1]);
                            break;
                        }
                }
                count++;
            }
        }
        return count;
    }
};
// unordered_multimap, XOR, iter_swap