int majorityElement(int a[], int size){
        
        unordered_map<int,int> mp;
       for(int i=0;i<size;i++){
           mp[a[i]]++;
       }
       for(auto i: mp){
           if(i.second> (size/2)){
               return i.first;
           }
       }

       return -1;
}