#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int min(int a,int b){return (a<b) ? a :b;}
int max(int a,int b){return (a>b) ? a :b;}
int main(){
	int M,N ; 
	int R;
	cin >> M >> N >> R;
	unsigned int A[M][N];
	for(int i=0;i<M;i++){
		for(int j =0 ; j<N;j++){
			cin >> A[i][j];
		}
	}
	if(M == min(M,N)){
		vector<int>loop[M/2]; 
		vector<int>loop_new[M/2];
		for(int i =0; i<M/2; i++){
			//cout << i << endl;
			//cout << i << M;
			for(int k = i;k<M-i;k++)
			loop[i].push_back(A[k][i]);
		
			for(int k = i+1;k<N-i;k++)
			loop[i].push_back(A[M-i-1][k]);

			for(int k = M-i-2; k>=i;k--)
			loop[i].push_back(A[k][N-i-1]);
			for(int k = N-i-2;k>=i+1;k--)
			loop[i].push_back(A[i][k]);
		//break;
		}
		//cout << loop[1].size();
		//for(int i =0 ; i< loop[0].size(); i++)
		//	cout << loop[0][i];
		//cout <<endl;

		int rot,counter,loop_size;
		for(int i =0; i< M/2;i++){
			loop_size = loop[i].size();
			rot = R % loop_size;
						if(rot == 0){
				for(int k=0;k<loop_size;k++)
				loop_new[i].push_back(loop[i][k]);
			continue;
			} 
			counter = loop_size - rot;
			for(int k=0;k<loop_size;k++){
				loop_new[i].push_back(loop[i][counter]);
				if(counter == loop_size-1)
					counter = 0;
				else
				counter++;
			}
		}
     // for(int i =0 ; i< loop_new[0].size(); i++)
		///	cout << loop_new[0][i];

	counter =0;
	for(int i =0; i<M/2; i++){
			//cout << i << endl;
			//cout << i << M;
			counter = 0; 
			for(int k = i;k<M-i;k++){
			  A[k][i] = loop_new[i][counter];
			  counter++;
		    }
			for(int k = i+1;k<N-i;k++){
			A[M-i-1][k] = loop_new[i][counter];
			counter++;
		}
			for(int k = M-i-2; k>=i;k--){
			A[k][N-i-1] = loop_new[i][counter];
			counter++;
		}
			for(int k = N-i-2;k>=i+1;k--){
			A[i][k] = loop_new[i][counter];
			counter++;
		}
		//break;
		}

	for(int i=0;i<M;i++){
		for(int j =0 ; j<N;j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	 }
	}

	else if(N == min(M,N) && M != N ){

		vector<int>loop[N/2]; 
		vector<int>loop_new[N/2];
		for(int i =0; i<N/2; i++){
			//cout << i << endl;
			//cout << i << M;
			for(int k = i;k<M-i;k++)
			loop[i].push_back(A[k][i]);
		
			for(int k = i+1;k<N-i;k++)
			loop[i].push_back(A[M-i-1][k]);

			for(int k = M-i-2; k>=i;k--)
			loop[i].push_back(A[k][N-i-1]);
			for(int k = N-i-2;k>=i+1;k--)
			loop[i].push_back(A[i][k]);
		//break;
		}
		//cout << loop[1].size();
		//for(int i =0 ; i< loop[0].size(); i++)
		//	cout << loop[0][i];
		//cout <<endl;

		int rot,counter,loop_size;
		for(int i =0; i< N/2;i++){
			loop_size = loop[i].size();
			rot = R % loop_size;
			if(rot == 0){
				for(int k=0;k<loop_size;k++)
				loop_new[i].push_back(loop[i][k]);
			continue;
			} 
				
			counter = loop_size - rot;
			for(int k=0;k<loop_size;k++){
				loop_new[i].push_back(loop[i][counter]);
				if(counter == loop_size-1)
					counter = 0;
				else
				counter++;
			}
		}
     // for(int i =0 ; i< loop_new[0].size(); i++)
		///	cout << loop_new[0][i];

	counter =0;
	for(int i =0; i<N/2; i++){
			//cout << i << endl;
			//cout << i << M;
			counter = 0; 
			for(int k = i;k<M-i;k++){
			  A[k][i] = loop_new[i][counter];
			  counter++;
		    }
			for(int k = i+1;k<N-i;k++){
			A[M-i-1][k] = loop_new[i][counter];
			counter++;
		}
			for(int k = M-i-2; k>=i;k--){
			A[k][N-i-1] = loop_new[i][counter];
			counter++;
		}
			for(int k = N-i-2;k>=i+1;k--){
			A[i][k] = loop_new[i][counter];
			counter++;
		}
		//break;
		}

	for(int i=0;i<M;i++){
		for(int j =0 ; j<N;j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	 }

	}
}