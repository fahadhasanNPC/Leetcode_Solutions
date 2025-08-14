#include <iostream>
using namespace std;

void matSum(int arr[][3],int n){

	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				sum+=arr[i][j];
			}else if(j== n-i-1){
				sum+=arr[i][j];
			}
		}
	}
	cout<< "sum "<< sum << endl;
}
int main(){
	int arr[3][3]={
			{1,2,3},
			{4,5,6},
			{7,8,9}
	};
	matSum(arr,3);
}

