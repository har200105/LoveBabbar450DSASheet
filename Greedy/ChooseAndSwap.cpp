 // int findPlatform(int arr[], int dep[], int n){
        
 //        sort(arr,arr+n);
 //        sort(dep,dep+n);
        
 //        int plat=1,res=1,i=1,j=0;
        
 //        while(i<n and j<n){
            
 //            if(arr[i]<=dep[j]){
 //                plat++;
 //                i++;
 //            }
            
 //            else if(arr[i]>dep[j]){
 //                plat--;
 //                j++;
 //            }
            
 //            if(plat>res){
 //                res = plat;
 //            }
            
 //        }
        
 //        return res;
 //    }





#include <bits/stdc++.h>
using namespace std;

int countLadoos(int arr[], int n){

    int sum = 0;


    int ans[n];


    if (n == 1) {
        return 1;
    }

    for (int i = 0; i < n; i++){
        ans[i] = 1;
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] > arr[i]) {
            ans[i + 1] = ans[i] + 1;
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > arr[i + 1]
            && ans[i] <= ans[i + 1]) {

            ans[i] = ans[i + 1] + 1;
        }

        sum += ans[i];
    }

    sum += ans[n - 1];

    return sum;
}

int main(){

    int n; cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << countLadoos(arr, n) <<endl;

    return 0;
}
