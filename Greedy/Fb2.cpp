#include <bits/stdc++.h> 
using namespace std; 
#define int long long int
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define INF 1e15
#define akipiD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int32_t main() {

    akipiD;

    int t; cin>>t; 

    int curr=1;
 
    while(t--) { 
        
        int n,m; cin>>n>>m; 
        char arr[n][m]; 

        int count=0; 

        for(int i=0;i<n;i++){ 
            for(int j=0;j<m;j++) { 
                cin>>arr[i][j]; 
                if(arr[i][j]=='^'){ 
                    count++; 
                } 
            } 
        } 
        
        cout<<"Case #"<<curr<<": "; 
        
        if(count==0) { 
            cout<<"Possible"<<endl; 
            for(int i=0;i<n;i++) { 
                for(int j=0;j<m;j++) { 
                    cout<<'.'; 
                } 
                cout<<endl; 
            } 
        } 


        else if(n==1 || m==1){ 
            cout<<"Impossible"<<endl; 
        } 
        
        else { 
            cout<<"Possible"<<endl; 
            for(int i=0;i<n;i++) { 
                for(int j=0;j<m;j++) { 
                    cout<<'^'; 
                } 
                cout<<endl; 
            } 
        } 

        curr++;

    } 

    return 0;
}