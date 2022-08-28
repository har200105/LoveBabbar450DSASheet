int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
         int s1=accumulate(S1.begin(),S1.end(),0);
       int s2=accumulate(S2.begin(),S2.end(),0);
       int s3=accumulate(S3.begin(),S3.end(),0);
       int i=0,j=0,k=0;
       int c=0;
       while(i<N1 && j<N2 && k<N3){
           if(s1==s2 && s2==s3){
               return s1;
           }
           if(s1>=s2 && s1>=s3){
               s1-=S1[i++];
           }else if(s2>=s1 && s2>=s3){
               s2-=S2[j++];
           }else{
               s3-=S3[k++];
           }
       }
       return 0;
    }






        











