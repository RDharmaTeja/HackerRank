#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define modul 1000000007;
using namespace std;

long int onedmoves(unsigned int start, unsigned int steps, unsigned int dim){
	long int table[dim][steps+1];
	for(int i = 0 ; i< dim ; i++)
	{
		table[i][0] = 1;      
	}
	for(int j =1 ; j< steps+1; j++){
	 for(int i =0; i< dim; i++){		
			if(i ==0)
			table[i][j] = table[i+1][j-1]	;
			else if(i == dim-1)
			table[i][j] = table[i-1][j-1];
			else{
				//cout << table[i+1][j-1] << " " << table[i-1][j-1];
				table[i][j] = (table[i+1][j-1] + table[i-1][j-1])%mod;

			} 
			//cout << table[i][j] << " "; 
		}		
		//cout << endl;
	}

	return table[start-1][steps];
} 

// recursive function 
int entire(int table[][],int N, int M){

}

int main() {
	unsigned int T,N,M;
	cin >> T;
	while(T>0){
		cin >> N >> M;
		unsigned int x[N],d[N];
		for(int i =0; i< N; i++)
			cin >> x[i]; 
		for(int i =0; i< N; i++)
			cin >> d[i];
		// function
		int table[M+1][N];	
		for(int j =0 ;j<=M ; j++){	
		for(int i =0 ; i< N ; i++){			
				table[j][i] = onedmoves(x[i],j,d[i]);
			}
		}
		cout << onedmoves(x[0],M,d[0]) << endl;
		T--;
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
