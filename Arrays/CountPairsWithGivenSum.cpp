 int getPairsCount(int arr[], int n, int k) {
    int count = 0;
       unordered_map<int,int> m;
       for(int i = 0; i<n; i++){
           if(m.find(k-arr[i]) != m.end()){
               count += m[k-arr[i]]; // increment count if element is present in the map
           } 
           
           m[arr[i]]++; //when that element is not present, then insert it in map
       }
       return count;
    }