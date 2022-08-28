#include<bits/stdc++.h>
using namespace std;

int main(){

	int t; cin>>t;
	while(t--){
		
		int n;
		int arr[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		int time[n];

		for(int i=0;i<n;i++){
			cin>>time[i];
		}

		int k; cin>>k;

		priority_queue<pair<int,int>>pq;

		for(int i=0;i<n;i++){
			pq.push({arr[i],i});
			if(pq.size() > k ){
				pq.pop();
			}
		}

		int ans=0;

		while(!pq.empty()){
			auto x : pq.top();
			pq.pop();
			ans+=time[x.second];
		}

		cout<<time<<endl;



	}

	return 0;
}