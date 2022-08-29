   typedef long long int lli;
   typedef long long ll;
   lli countAndMerge(ll v[], ll low, ll mid, ll high){
       lli count = 0, len1 = (lli)(mid - low + 1), len2 = (lli)(high - mid);
       ll left[len1], right[len2];
       for(ll i=0; i<len1; ++i)
           left[i] = v[i+low];
       for(ll i=0; i<len2; ++i)
           right[i] = v[mid+i+1];
       lli i = 0, j = 0, idx = low;
       while(i < len1 && j < len2){
           if(left[i] <= right[j])
               v[idx++] = left[i++];
           else{
               v[idx++] = right[j++];
               count += (len1-i);
           }
       }
       while(i<len1)
           v[idx++] = left[i++];
       while(j<len2)
           v[idx++] = right[j++];
       return count;
   }
   
   lli countOfInversions(ll v[], ll low, ll high){
       lli res = 0;
       if (low < high)
       {
           ll mid = low + (high - low) / 2;
           res += countOfInversions(v, low, mid);
           res += countOfInversions(v, mid + 1, high);
           res += countAndMerge(v, low, mid, high);
       }
       return res;
   }
   
   lli inversionCount(ll arr[], ll N){
       lli res = countOfInversions(arr, 0, N-1);
       return res;
   }