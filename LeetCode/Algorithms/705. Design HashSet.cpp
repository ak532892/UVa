class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        v.resize(1000, vector<bool>());
    }
    
    void add(int key) {
        int i = key/1000;
        int j = key%1000;
        
        if(v[i].empty()) 
            v[i].resize(1000, false);
        v[i][j] = true;
    }
    
    void remove(int key) {
        int i = key/1000;
        int j = key%1000;
        
        if(!v[i].empty())
            v[i][j] = false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        int i = key/1000;
        int j = key%1000;
        
        if(v[i].empty())
            return false;
        return v[i][j];
    }
private:
    vector<vector<bool>> v;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
 //bitset, binary search tree 