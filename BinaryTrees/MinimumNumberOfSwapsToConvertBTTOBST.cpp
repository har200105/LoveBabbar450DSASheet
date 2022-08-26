void inOrder(vector<int>&A,int i,int n,vector<int>&vec){
      // base case
      if(i>=n){
          return;
      }
      //left element=2*i+1
      inOrder(A,2*i+1,n,vec);
      //Push_back root
      vec.push_back(A[i]);
      //Rigth element is 2*i+2
      inOrder(A,2*i+2,n,vec);
    }
    
    int swaps(vector<int>&vec,int n){
        //mapping elements with their indexes
        map<int,int>mpp;
        for(int i=0;i<n;i++){
          mpp[vec[i]]=i;
          
        }
       
        int i=0;
        //comparing inorder to sorted inorder.
        sort(vec.begin(),vec.end());
        
        
         // no. of swaps to make both indetical
        int cnt=0;
        while(i<n){
            if(mpp[vec[i]]!=i){
                cnt++;
                swap(vec[i],vec[mpp[vec[i]]]);
                continue;
            }
            i++;
            
        }
        return cnt;
        
    }
    int minSwaps(vector<int>&A, int n){
        //Write your code here
        vector<int>vec;
        
        // You got inorder of tree
        inOrder(A,0,n,vec);
        int ans=swaps(vec,n);
        return ans;
    }