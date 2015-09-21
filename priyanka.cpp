//https://www.hackerrank.com/challenges/priyanka-and-toys
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;
    int w[N];
    for(int i =0; i<N;i++)
    	cin >> w[i];
    sort(w,w+N);
    int units=0,buffer= -1;
    for(int i =0;i<N;i++){
    	if(w[i] > buffer){
    		units++;
    		buffer = w[i]+4;
    	}
    }
    cout << units << endl;

    return 0;
}
