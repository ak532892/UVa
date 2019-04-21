class MyStack {
    queue<int> input, output;
public:
    /** Push element x onto stack. */
    void push(int x) {
         if(input.empty())
            output.emplace(x);
         else if(output.empty())
            input.emplace(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int num;
        if(input.empty()){
            int size = output.size();
            while(size-- > 1){
                int front = output.front();
                input.push(front);
                output.pop();
            }
            num = output.front();
            output.pop();
        }
        else{
            int size = input.size();
            while(size-- > 1){
                int front = input.front();
                output.push(front);
                input.pop();
            }
            num = input.front();
            input.pop();
        }
        return num;
    }
    
    /** Get the top element. */
    int top() {
        int front;
        if(input.empty()){
            while(!output.empty()){
                front = output.front();
                input.push(front);
                output.pop();
            }
        }
        else{
            while(!input.empty()){
                front = input.front();
                output.push(front);
                input.pop();
            }
        }
        return front;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return !(input.size() || output.size());
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
 //deque, reverse push 