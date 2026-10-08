class MinStack {
    public:
        MinStack() {

        }

        void push(int val) {
            st.push(val);
            int current_min = min_st.empty() ? val : std::min(val, min_st.top());
            min_st.push(current_min);
        }

        void pop() {
            st.pop();
            min_st.pop();
        }

        int top() {
            return st.top();
        }

        int getMin() {
            return min_st.top();
        }

    private:
        std::stack<int> st;
        std::stack<int> min_st;
};