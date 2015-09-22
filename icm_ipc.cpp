//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
		int N, M;
		cin >> N >> M;
		char t[N][M];
		for(int i =0; i< N; i++)
			cin >> t[i];
		int max_topics =0, teams = 0, buffer_topics; 
		for(int i =0; i< N-1; i++){
			for (int j = i+1; j<N; j++){
				// find max size goes here
				buffer_topics =0;
				for(int k =0; k< M; k++)
				{
					if(t[i][k] == '1' || t[j][k] == '1' )
						buffer_topics++;
				}
				if(max_topics == buffer_topics)
					teams++;
				else if(max_topics < buffer_topics){
					max_topics = buffer_topics;
					teams = 1;
				}
			}
		}
		cout << max_topics << endl << teams << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}