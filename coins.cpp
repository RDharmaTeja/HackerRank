//Dynamic Programming Problem Statement:
//How many different ways can you make change for an amount, 
//given a list of coins? In this problem, your code will need to efficiently compute the answer.

#include <iostream>
#include <algorithm>
using namespace std;
// recursive solution
int recSolver(int arr[], int N, int M){
if(N == 0)return 1;
if(N < 0 || M <= 0)return 0;
return recSolver(arr,N-arr[M-1],M) + recSolver(arr,N,M-1);      
}

long long unsigned int dpSolver(int arr[], int N, int M);

int main(){
	int N,M;
	cin >> N;
	cin >> M;
	int C[M];
	for(int i=0; i<M ;i++)
	cin >> C[i];
	//sort(C,C + M);
	//for(int i=0; i<M ;i++)
	//cout << recSolver(C,N,M);
	cout << dpSolver(C,N,M);
	return 0;

}
// DP tabulation
long long unsigned int dpSolver(int arr[], int N, int M){
	long long unsigned int table[N+1][M];
	for(int i = 0 ; i< M; i++)
		table[0][i] =1;
	long long x,y;
	for(int i =1; i< N+1 ; i++ ){
		for(int j =0; j<M; j++){
			// contains arr[j]
			x = (i-arr[j] >=0) ? table[i-arr[j]][j]:0;
			// doesn't contain arr[j]
			y =  (j>0) ? table[i][j-1]:0;

			table[i][j] = x+y;
		}
	}
	return table[N][M-1];
}	