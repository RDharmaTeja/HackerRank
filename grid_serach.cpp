//https://www.hackerrank.com/challenges/the-grid-search
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	int T, R,C,r,c;
	//cout << "teja";
	cin >> T;
	while(T--){
		cin >> R >> C;
		char G[R][C];
		for(int i =0; i< R; i++)
			cin >> G[i];
		cin >> r >> c;
		char P[r][c];
		for(int i =0; i< r; i++)
			cin >> P[i];

		// loop for search
		string ans = "NO";
		for(int i = 0; i<= (R-r) ; i++){
			if(ans == "YES")
				break;
			for(int j =0 ; j <= (C-c) ; j++){
				ans = "YES";
				for(int l =0 ; l< r;l++){
					for(int m =0; m< c; m++){
						if(P[l][m] != G[i+l][j+m]){
							ans = "NO";
							break;
						}
					}
					if(ans == "NO")
						break;
				}

				if(ans == "YES")
				{
					cout << ans << endl;
					break;
				}

			}

		}
		if(ans == "NO")
			cout << ans << endl;
	}
	
}