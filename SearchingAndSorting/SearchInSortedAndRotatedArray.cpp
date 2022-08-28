int search(int A[], int l, int h, int key){
      
        while(l<=h){
           
           int mid=(l+h)/2;
           
           if(A[mid]==key){
             return mid;
           }

           else if(A[mid]>=A[l]){
               if(A[mid]>=key and A[l]<=key){
                 h=mid-1;
               }
               else{
                 l=mid+1;
               }
           }


           else{
               if(A[mid]<=key and A[h]>=key){
                 l=mid+1;
               }
               else{
                  h=mid-1;
               }
           }

       }
       
       return -1;

}