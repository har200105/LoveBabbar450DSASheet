#include<bits/stdc++.h>
using namespace std;


void heapify(int arr[], int n, int i){
	
	int largest = i; 
	int l = 2 * i + 1;
	int r = 2 * i + 2; 

	if (l < n && arr[l] > arr[largest]){
		largest = l;
	}

	if (r < n && arr[r] > arr[largest]){
		largest = r;
	}


	if (largest != i) {
		swap(arr[i], arr[largest]);

		heapify(arr, n, largest);
	}
}

void heapSort(int arr[],int n){
	int size=n;
	
	while(size>1){
		swap(arr[size],arr[1]);
		size--;
		heapify(arr,size,1);
	}

}

int main(){
	
	
	return 0;

}