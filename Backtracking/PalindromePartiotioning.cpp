vector<vector<string>> ans;
    bool isPalindrome(string s){
        for(int i=0;i<s.length()/2;i++){
            if(s[i]!=s[s.length()-i-1])
                return false;
        }
        return true;
    }
 
    void recurse(int index,string temp,string s,vector<string>& curr){
        if(index==s.length()){
            if(temp.empty())
                ans.push_back(curr);
            return;
        }
        temp.push_back(s[index]);
 
        // 1st choice
        // just go with next character
        recurse(index+1,temp,s,curr);
 
        // 2nd choice
        if(isPalindrome(temp)){
            curr.push_back(temp);
            recurse(index+1,"",s,curr);
            curr.pop_back();
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> curr;
        recurse(0,"",s,curr);
        return ans;
    }