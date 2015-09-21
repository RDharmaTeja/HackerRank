// https://www.hackerrank.com/domains/algorithms/dynamic-programming/page/2
#include<iostream>
using namespace std;
long long int min2(long long int a, long long int b) { 
	return (a>b)?b:a;
}
long long int min3(long long int a, long long int b,long long int  c) { 
	long long int k = min2(b,c);
	return (a < k)? a: k;
}
long long int max2(long long int a, long long int b) { return (a>b)?a:b;}
long long int max3(long long int a, long long int b,long long int c) { return (a > max2(b,c))? a: max2(b,c);}
int main(){
	int T, N;
	cin >> T;
	while(T>0){
		cin >> N;
		long long int A[N],F[N], a, b, c;
		for(int i =0 ; i< N; i++)
		cin >> A[i];
		F[N-1] = A[N-1];
		F[N-2] = A[N-1] + A[N-2];
		F[N-3] = A[N-1] + A[N-2] + A[N-3];
		F[N-4] = A[N-4] + A[N-3] + A[N-2];
		for(int i = N-5; i>=0 ; i--){
			a = A[i] + min3(F[i+2], F[i+3], F[i+4]);
			b = A[i] + A[i+1] + min3(F[i+3], F[i+4], (i+5 <= N-1)?F[i+5]:0);
			c = A[i] + A[i+1] + A[i+2] + min3(F[i+4], (i+5 <= N-1)?F[i+5]:0, (i+6 <= N-1)?F[i+6]:0);
			F[i] = max3(a,b,c);
		}
		cout << F[0] << endl;
		T--;
	}

	return 0;
}