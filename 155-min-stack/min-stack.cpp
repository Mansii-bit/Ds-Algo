class MinStack {
public:
vector<int> st;
vector<int> minvec;
int mini=1e9;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
        minvec.push_back(val);
        // mini=min(mini,val);
    }
    
    void pop() {
        // if(st.back()==mini)mini=minvec.back();
        minvec.pop_back();
        st.pop_back();
    }
    
    int top() {

        return st.back();
    }
    
    int getMin() {
        int mini=pow(2,31) -1;
        for(int i : minvec) mini=min(mini,i);
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