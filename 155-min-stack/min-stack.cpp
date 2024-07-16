class MinStack {
public:
    stack<long long> st;
    long long mini;
    MinStack() {
        while (st.empty() == false) st.pop();
        mini = INT_MAX;
    }
    
    void push(int val) {
        long long va=val;
        if(st.empty()){
            st.push(va);
            mini=va;
        }
        else{
            if(va>=mini){
                st.push(va);
            }
            else{
                st.push(2*va*1LL-mini);
                mini=va;
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;
        long long c=st.top();
        st.pop();
        if(c<mini){
            mini=2*mini-c;
        }
    }
    
    int top() {
        if(st.empty()) return -1;
        long long c=st.top();
        if(c<mini){
            return mini;
        }
        else return c;
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */