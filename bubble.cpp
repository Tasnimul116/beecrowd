#include<bits/stdc++.h>

using namespace std;




int main(){
	int n;
	cin>>n;
	int arr[n];

	
	for(int i=0; i<n; ++i){
		cin>>arr[i];
	}

	for(int i=0; i<n-1;i++){
		//for pass

		for(int j=0; j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j+1],arr[j]);
			}
		}
	}

	cout<<"Sorted array: ";
	for(int i=0; i<n; ++i){
		cout<<arr[i]<<" ";
	}


}

