#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	int A[n],P,Q;
	for(int i; i<n;i++)
		cin >> A[i];
	cin >> P >> Q;
	sort(A,A+n);
	if(P <= A[0]&& Q <=  A[0])
		cout << P;
	else if (P >= A[n-1]&& Q >=  A[n-1])
		cout << Q;
	else if()	
	else if()
	return 0;
}