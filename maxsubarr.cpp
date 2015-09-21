// maximum contiguous and non-contiguous subarray using divide and conquer
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
using namespace std;
int max2(int,int);
int max3(int a, int b, int c){
	return max2(max2(a,b),c);
}
// for crossing array
int maxCrossingSum(int arr[], int l, int m, int h){
	int sum =0, left_sum=0, right_sum =0;
	for(int i = m; i>=l; i--){
		sum += arr[i];
		if(sum > left_sum)
			left_sum = sum;
	}
	sum = 0;
	for(int i = m+1; i<=h;i++){
		sum += arr[i];
		//cout << right_sum << " " << sum << endl;
		if(right_sum < sum)
		right_sum = sum; 
	}

	return right_sum+left_sum;
}

// recursive max subarray
int maxSubArray(int arr[], int l, int h){
if(l == h)
	return arr[l];
int m = (l+h)/2;
return max3(maxSubArray(arr,l,m), maxSubArray(arr,m+1,h),maxCrossingSum(arr,l,m,h));
}

// non contiguous maximum
int nonCMax(int arr[], int l, int m){
	int sum = 0;
	for(int i = l; i<=m; i++ ){
		if(arr[i]>=0)
			sum += arr[i];
	}
	return sum;
}

// dynamic solver
int dpsolver(int arr[], int n)
{
	int max_end_here = arr[0], max_so_far = arr[0];
	for(int i =1 ; i<n ; i++){
		max_end_here = max2(arr[i], max_end_here+arr[i]);
		max_so_far = max2(max_so_far, max_end_here);
	}
	return max_so_far;
}
int main(){
	int T,n;
	cin >> T;
	//cout <<max2(14,15);
	while(T!=0){
		cin >> n;
		int A[n];
		for(int i=0;i<n;i++){
		cin >> A[i]		;	
		}
		int maxsum = dpsolver(A,n); 
		cout << maxsum << " ";
		if(maxsum <= 0)
		cout << maxsum;
		else
			cout << nonCMax(A, 0, n-1);
		//cout << maxSubArray(A, 0, n-1) << endl;
		T--;
	}
	
}

int max2(int a , int b){
	return (a>b)? a: b;
}