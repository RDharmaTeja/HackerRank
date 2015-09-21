#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	int T,N,K;
	string ans = "YES";
	cin >> T;
	while(T>0){
		ans = "YES";
		cin >> N;
		cin >> K;
		//cout << N;
		//cout << K;
		unsigned int A[N];
		unsigned int B[N];
		for(int i=0;i<N;i++)
			{
				cin >> A[i];
				//cout << i;
			}
		for(int i=0;i<N;i++)
			{
			cin >> B[i];
			//cout << i;
		}
		sort(A,A+N);
		sort(B,B+N);
		for(int i =0 ; i< N; i++){
			if(A[i]+B[N-i-1] < K)
			{
				ans = "NO";
				break;
			}			
		}
		cout << ans << endl;



		T--;
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
