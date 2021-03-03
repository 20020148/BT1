#include<iostream>
using namespace std;

void Nhap(int arr[]; int n){
	for(int i=0; i< n; i++){
		cin >> arr[i];
	}
}
 int max( arr[]; int n){
	int max= arr[0];
	for(int i=0;i<n;i++)
		if(max < arr[i])
			max = arr[i];

	return max;
}
int min( arr[]; int n){
	int min= arr[0];
	for(int i=0;i<n;i++)
		if(min > arr[i])
			min = arr[i];
	return min;
}
 int main(){
 	int n;
	cin >> n;
	Nhap(arr[];n)
	int arr[n];
	int sum = 0;
	double average = 0;
	for(int i=0; i<n;i++){
		sum += arr[i];
		average = sum / n;
	}
	cout << average << endl << max << endl << min; 
	return 0;
 }

