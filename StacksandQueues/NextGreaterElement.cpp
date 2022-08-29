vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long> st;
        vector<long long> ans(n);
        
        for(int i = n-1; i >= 0; i--)
        {
            while(!st.empty())
            {
                if(st.top() >= arr[i]){
                    ans[i] = st.top();
                    break;
                }
                st.pop();
            }
            if(st.empty())ans[i] = -1;
            
            st.push(arr[i]);
        }
        
        return ans;
    }