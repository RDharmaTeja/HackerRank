/*
Problem Statement
Alice is a kindergarden teacher. She wants to give some candies to the children in her class.  All the children sit in a line,
and each  of them has a rating score according to his or her performance in the class.
Alice wants to give at least 1 candy to each child. 
If two children sit next to each other, then the one with the higher rating must get more candies.
Alice wants to save money, so she needs to minimize the total number of candies.
*/
#include <iostream>

using namespace std;

int max(int a, int b) {return (a>b)? a : b;}   
long long int dpSolver(int R[], int N){
int C[N];
for(int i=0;i<N;i++)
	C[i] =1;
for(int i=1; i< N;i++){
	if(R[i] > R[i-1])
		C[i] = C[i-1] +1;	
}
for(int i = N-2 ; i>=0; i--){
	if(R[i] > R[i+1])
		C[i] = max(C[i+1]+1,C[i]);
}
long long int sum =0;
for(int i=0;i<N;i++)
	sum += C[i];
return sum;
}

int main(){
int N;
cin >> N;
int R[N];
cout << "Teja is a good boy";
for(int i=0; i<N; i++)
cin >> R[i];
cout << dpSolver(R,N);	
} 
