 bool ispar(string s){
       stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='{' || s[i]=='(' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return 0;
                }
                else{
                    char val = st.top();
                    st.pop();
                    if(s[i]==']' && val!='['){
                        return 0;
                    }
                    else if(s[i]==')' && val!='('){
                        return 0;
                    }
                    else if(s[i]=='}' && val!='{'){
                        return 0;
                    }
                }
            }
        }
        if(st.empty()){
            return 1;
        }
        else{
            return 0;
        }
}