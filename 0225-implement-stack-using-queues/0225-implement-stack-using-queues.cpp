class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        int n = q.size();
        //push an element
        q.push(x);
        
        //run a loop to make the queue behave as stack
        for(int i=0; i<n; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int k = q.front();
        q.pop();
        return k;
        
    }
    
    int top() {
        int k = q.front();
        return k;
    }
    
    bool empty() {
        if(q.empty())
            return true;
        else
            return false;
        
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