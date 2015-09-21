// knapsack problem https://www.hackerrank.com/challenges/unbounded-knapsack	
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int T, N,K;
	cin >> T;
	while(T >0){
		cin >> N >> K;
		int W[N];
		int m[K+1];
		for(int i =0 ; i <= K; i++){
			m[i] = 0;
		}
		for(int i =0; i<N ; i++)
			cin >> W[i];
		sort(W,W+N);


		for(int i =1 ; i <= K; i++){

			vector <int> values;
			//cout << values.size();
		for(int j = 0; j< N; j++){
			if(W[j] <= i){
				values.push_back(W[j] + m[i-W[j]]);
			}
			else
				break;
		}
		if(values.size() ==0) m[i]=0;
		else
		m[i] = *max_element(values.begin(),values.end());		 
		//cout << "teja";
		//cout << m[i];
		}
		cout << m[K] << endl;
		T--;
	}
	return 0;
}