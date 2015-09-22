//https://www.hackerrank.com/challenges/manasa-and-stones
#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main(){
	int T, N, a, b;
	cin >> T;
	while(T--){
		vector <int> number;
		cin >> N >> a >> b;
		if (a == b){
			cout << (N-1)*a << endl;
		}
		else{
		for(int i=0; i < N; i++){
			number.push_back(i*a + (N-1-i)*b);  
		}
		sort(number.begin(),number.end());		
		for(int i=0;i < number.size(); i++)
		{
			cout << number[i] << " ";
		}
		cout << endl;
	 }

	}
	return 0;
}