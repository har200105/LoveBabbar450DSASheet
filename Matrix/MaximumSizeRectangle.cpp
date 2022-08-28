  int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> leftSmaller(n);
        vector<int> rightSmaller(n);
        stack<int> st;
        
        // Finding the Left Smaller 
        for(int i = 0; i < n; i++){
            
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            //if no Nearest Smaller to Left exist the take -1(ground)
            if(st.empty()){
                leftSmaller[i] = -1;
            }
            else{
                leftSmaller[i] = st.top();
            }
            st.push(i);
            
        }
        
        while(!st.empty()){
            st.pop();
        }
        
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
        
            if(st.empty()){
                rightSmaller[i] = n;
            }
            else{
                rightSmaller[i] = st.top();
            }
            st.push(i);
        }
        
        vector<int> width(n, 0);
        for(int i = 0; i < n; i++)
        {
            width[i] = rightSmaller[i] - leftSmaller[i] - 1;
        }
        
        // calculating the area
        vector<int> area(n, 0);
        for(int i = 0; i < n; i++)
        {
            area[i] = width[i] * heights[i];
        }
        
        int maxArea = 0;
        for(int i = 0; i < n; i++)
        {
            maxArea = max(maxArea, area[i]);
        }
        return maxArea;
    }
    int maxArea(int matrix[MAX][MAX], int n, int m) {
        // Your code here
        vector<int> v(m, 0);
        int res = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(matrix[i][j] == 0)
                    v[j] = 0;
                else
                    v[j]++;
            }
            res = max(res, largestRectangleArea(v));
        }
        return res;
    }