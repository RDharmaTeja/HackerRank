#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int swap(int A[], int n,int start, int value){
 int buffer;
 if(A[start] == value)
 	return 0;
 else{
 	buffer = A[start];
 	A[start] = value;
 	for(int i = start+1; i<n; i++){
 		if(A[i] == value){
 			A[i] = buffer;
 			break;
 		}
 	}
 	return 1;
 }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
unsigned int N, K;
cin >> N >> K;
int A[N];
for(int i=0;i< N;i++)
	{
		cin >> A[i];
	}
unsigned int buffer_n=N;int swaped;
int j = 0;
while(K>0){	
if(j>=N)
	break;
swaped = swap(A,N,j,buffer_n);
if(swaped == 1)
K--;
buffer_n -= 1;
j++;
//cout << i;
}


for(int i=0;i<N;i++)
cout << A[i] << " ";

    return 0;
}


