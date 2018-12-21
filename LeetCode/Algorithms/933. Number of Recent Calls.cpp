class RecentCounter {
    vector<int> count;
public:
    int ping(int t) {
        count.push_back(t);
        for(auto i = count.begin(); i != count.end(); i++){
            if(*i < (t-3000)){
                count.erase(count.begin(), count.begin()+1);
                i--;
            }
        }
        return count.size();
    }
};

/*
queue, bst
*/