#include <bits/stdc++.h> 
using namespace std; 
int main() {

    int t;  cin >> t;  
    int i=1;
    while (t--) {

        int n, k;  cin >> n >> k; 
        int a[n + 1]; 
        int m[101] = {0}; 

        for (int i = 1; i <= n; i++) { 
            cin >> a[i]; 
            m[a[i]]++; 
        } 
        
        bool check = true; 
 
        for (int i = 1; i <= n; i++) { 
            if (m[a[i]] > 2){ 
                check = false; 
                break; 
            } 
        } 

         cout << "Case #" << i << ":" << " "; 

        if (check == false) { 
            cout << "NO"<<endl; 
        } 
        else { 
            if (k * k >= n) { 
                cout << "YES" << endl; 
            } 
            else {
                cout << "NO" << endl; 
            } 
        } 
        i++;
    }

}