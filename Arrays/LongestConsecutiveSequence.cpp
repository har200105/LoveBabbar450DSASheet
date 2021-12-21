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