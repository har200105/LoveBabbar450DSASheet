void morethanNbyK(int arr[], int n, int k){
    int x = n / k;
    unordered_map<int, int> freq;
 
    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for(auto i : freq){
        if (i.second > x){
            cout << i.first << endl;
        }

}