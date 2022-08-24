bool subArrayExists(int arr[], int n){
    unordered_set<int> sumSet;
    int sum = 0;
    
    for (int i = 0; i < n; i++){
        sum += arr[i];
        if (sum == 0 || sumSet.find(sum)!= sumSet.end()){
            return true;
        }
        sumSet.insert(sum);
    }
    return false;
    
    }