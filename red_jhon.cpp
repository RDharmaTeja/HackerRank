//https://www.hackerrank.com/challenges/red-john-is-back/forum
#include<iostream>
#include<cmath>
using namespace std;
unsigned int factorial(int n){
	if(n == 0)
	return 1;
	else
		return n*factorial(n-1);

}
unsigned int way_count(int n, int k){
unsigned int ways=1;;
for(int i =0; i<k; i++){
ways *= n - 3*k -i;
}
return ways/factorial(k); 
} 

int primes(int n){
 int primes = n-1;
 int k;
 for(int i =2; i <= n ; i++ )
 	{
 		k =(int)sqrt(i);
 		//k = i/2;
 		for(int j =2 ; j<= k; j++){
 			if(i%j == 0){
 				primes--;
 				break;
 			}
 		}
}
return primes;
}

int main(){
	int T,N;
	cin >> T;

	while(T>0){
		cin >> N;
		//cout << factorial(N);
		int k = 0;
		unsigned int ways =0;
		while (N-4*k >= 0){
			ways += way_count(N,k);
			k++;
		} 
		//cout << ways << endl;
		cout << primes(ways) << endl;
		T--;
	}

	return 0;	
}