   int findLongestConseqSubseq(int arr[], int n){
        int ans = 0, count = 0;
 
    sort(arr, arr + n);
 
    vector<int> v;
    v.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
            v.push_back(arr[i]);
    }
    for (int i = 0; i < v.size(); i++)
    {
         
        if (i > 0 && v[i] == v[i - 1] + 1)
            count++;
        else
            count = 1;

        ans = max(ans, count);
    }
    return ans;
}




    int findLongestConseqSubseq(int nums[], int n){
             
        set<int>s (nums,nums+n);
        
        int longest=0;
        
        for(int i=0;i<n;i++){
           
           if(s.find(nums[i] - 1)!=s.end()){
                continue;
           }
            
            else{
                
                int count = 0;
                int current_element = nums[i];
                
                while(s.find(current_element) != s.end())
                {
                    count++;
                    current_element++;
                }
                
                longest = max(longest,count);
            }
            
        }
        
        return longest;
        
    }