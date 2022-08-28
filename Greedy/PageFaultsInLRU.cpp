int pageFaults(int n, int c, int a[]){
        
       vector<pair<int ,int>> page_array;
       int fault=0;
       int flag=0;
       for(int i=0;i<n;++i){
           flag=0;
           int max_index=INT_MIN;
           int replace=-1;
           for(int j=0;j<page_array.size();++j){
               if(page_array[j].first==a[i] && flag==0){
                   page_array[j].second=1;
                   flag=1;
                   continue;
               }
               page_array[j].second++;
               if(max_index<page_array[j].second){
                   max_index=page_array[j].second;
                   replace=j;
               }
           }
           if(!flag){
               fault++;
               if(page_array.size()<c){
                   page_array.push_back(make_pair(a[i],1));
               }
               else{
                   page_array[replace].first=a[i];
                   page_array[replace].second=1;
               }
           }
       }
       return fault;
        
    }