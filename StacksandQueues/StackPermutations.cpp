class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
       stack<int> st;
       int j = 0;
       for(auto x : A){
           st.push(x);
           while(!st.empty() and st.top() == B[j]){
               st.pop();
               j++;
           }
       }
       return st.empty();

    }
};