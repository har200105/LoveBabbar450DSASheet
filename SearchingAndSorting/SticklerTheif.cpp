 int FindMaxSum(int arr[], int n){

    int sum1 = arr[0];
    int sum2 = 0;
    int result;
    for (int i = 1; i < n; i++){
        result = (sum1 > sum2) ? sum1 : sum2;
        sum1 = sum2 + arr[i];
        sum2 = result;
    }
    return ((sum1 > sum2) ? sum1 : sum2);

}