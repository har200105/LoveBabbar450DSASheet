 int isPossible(int A [] ,int n, int pages, int students) {
    int cnt = 0;
    int sumAllocated = 0; 
    for(int i = 0;i<n;i++) {
        if(sumAllocated + A[i] > pages) {
            cnt++; 
            sumAllocated = A[i];
            if(sumAllocated > pages) return false; 
        }
        else {
            sumAllocated += A[i];
        }
    }
    if(cnt < students) return true; 
    return false; 
}


    int findPages(int arr[], int n, int B) {
    if(B > n) return -1; 
    int low = arr[0]; 
    int high = 0;
    for(int i = 0;i<n;i++) {
        high = high + arr[i]; 
        low = min(low, arr[i]); 
    }
    int res = -1; 
    while(low <= high) {
        int mid = (low + high) >> 1; 
        //cout << low << " " << high << " " << mid << endl; 
        if(isPossible(arr,n,mid, B)) {
            res = mid; 
            high = mid - 1; 
        }
        else {
            low = mid + 1; 
        }
    }
    return low; 
}