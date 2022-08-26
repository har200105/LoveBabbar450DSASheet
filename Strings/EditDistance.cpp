int dp[105][105];

int editDist(int i , int j ,string s1 , string s2){
	if(i==s1.size()){
		return  s2.size()-j; 
	}

	if(j==s2.size()){
		return s1.size()-i;
	}

	if(s1[i]==s2[j]){
		return dp[i][j]=editDist(i+1,j+1,s1,s2);
	}
	
	if(dp[i][j]!=-1){
	    return dp[i][j];
	}

	else{
		int left=1+editDist(i,j+1,s1,s2);
		int mid=1+editDist(i+1,j,s1,s2);
		int right=1+editDist(i+1,j+1,s1,s2);

		return dp[i][j]=min({left,mid,right});
	}
}



    int editDistance(string s, string t) {
        memset(dp,-1,sizeof dp);
        return editDist(0,0,s,t);
    }