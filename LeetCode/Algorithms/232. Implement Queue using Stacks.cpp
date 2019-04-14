class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        if(s.empty()){
            while(!s2.empty()){
                s.emplace(s2.top());
                s2.pop();
            }
        }
        s.emplace(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(s2.empty()){
            while(!s.empty()){
                s2.emplace(s.top());
                s.pop();
            }
        }
        int top = s2.top();
        s2.pop();
        return top;
    }
    
    /** Get the front element. */
    int peek() {
        if(s2.empty()){
            while(!s.empty()){
                s2.emplace(s.top());
                s.pop();
            }
        }
        return s2.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s.empty() && s2.empty();
    }
private:
    stack<int> s, s2;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
 
 //recursive