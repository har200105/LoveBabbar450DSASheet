private:
    void solve(string S,vector<string>&ans,int index){
        
        if(index >= S.length())
        {
            ans.push_back(S);
            return;
        }
        
        for(int j=index;j<S.length();j++)
        {
            swap(S[index],S[j]);
            solve(S,ans,index+1);
            
            // Backtracking
            swap(S[index],S[j]);
        }
    }
	public:
		vector<string>find_permutation(string S)
		{
		vector<string>ans;
        int index = 0;
        solve(S,ans,index);
        sort(ans.begin(),ans.end());
        return ans;
		}