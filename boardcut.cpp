//https://www.hackerrank.com/challenges/board-cutting
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define mod 1000000007

int main() {
	int T,M,N;
	cin >> T;
	while(T>0){
		cin >> M >> N;
		int x[M],y[N];
		for(int i=0 ; i< M-1 ; i++)
		cin >> x[i];
		for(int i=0 ; i< N-1 ; i++) 	
		cin >> y[i];
		sort(x, x+M-1);
		sort(y, y+N-1);
		unsigned int colum_cuts=0, row_cuts=0;
		int row_count = M-2, column_count = N-2;
		int cost=0;		
		while(colum_cuts + row_cuts < M+N-2){
			if(x[row_count] >= y[column_count]){
				cost =(cost % mod + (x[row_count]*(1+colum_cuts)%mod))%mod;	
				row_cuts++;
				if(row_count != 0 )
				row_count--;
			else
				x[row_count] = -1; 
			}
			else{
			   cost = (cost % mod + (y[column_count]*(1+row_cuts))%mod)%mod;
				colum_cuts++;
				if(column_count != 0)
				column_count--;
			else
				y[column_count] = -1;
			}

		}
		cout << cost << endl;

		T--;
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
