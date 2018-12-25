class MinStack {
public:
    int height = -1;
    int m;
    int s[10000];
    
    void push(int x) {
        height++;
        s[height] = x;
        if(height == 0)
            m = x;
        else
            m = min (m, x);
    }
    
    void pop() {
        if(top() == m){
            m = s[0];
            for(int i = 1; i < height; i++)
                m = min(m, s[i]);
        }
        height--;
    }
    
    int top() {
        return s[height];
    }
    
    int getMin() {
        return m;
    }
};
/*
two stack or pair
*/