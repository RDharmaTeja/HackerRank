#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int min(long long int a, long long int b){ return (a<b)?a:b;}
int main() {

	int T;
	long long int X,Y,Z,B,W;
	cin >> T;
	while(T--){
		cin >> B >> W >> X >> Y >> Z;
		cout << B*min(X,Y+Z)+ W*min(Y,X+Z) << endl;
	}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
