#include<iostream>
using namespace std;

int main(){
	int n,q;
	cin>>n>>q;
	int *arr[n];
	for(int i=0;i<n;i++){
		int size;
		cin>>size;
		arr[i]=(int *)malloc(size*sizeof(int));
		for(int j=0;j<size;j++)
			cin>>arr[i][j];
	}
	for(int i=0;i<q;i++){
		int row,column;
		cin>>row>>column;
		cout<<arr[row][column]<<endl;
	}
	for(int i=0;i<n;i++){
		free(arr[i]);
	}

}
