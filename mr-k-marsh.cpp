//https://www.hackerrank.com/challenges/mr-k-marsh
#include <iostream>
#include <algorithm>
using namespace std;
struct leftup {
	int left=0;
	int right=0;
};
int main(){
	int m,n;
	cin >> m >> n;
	char c[m][n];
	for(int i=0; i< m ; i++)
	cin >> c[i];
	leftup S[m][n];
	int left[m][n];
	int up[m][n];	
	cout << S[1][2].left;
	return 0;
}