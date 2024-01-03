class MyStack {
    queue<int> q;
public:
    MyStack() 
    {
    }
    
    void push(int x) 
    {
        q.push(x);
        int size = q.size()-1;
        
        while(size!=0)
        {
            int x = q.front();
            q.pop();
            q.push(x);
            size--;
        }
    }
    
    int pop() 
    {
        if(!q.empty())
        {
            int ans = q.front();
            q.pop();
            return ans;
        }
        return -1;
    }
    
    int top() 
    {
        if(!q.empty())
            return q.front();
        return -1;  
    }
    
    bool empty() 
    {
        return q.empty();    
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
