#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(){
	void *p1;
	int *p2, *p3;
	int a = 10;
	p2 = &a;
	p1 = p2;
	p3 = (int *)p1;
	cout << *p3;
	cout << endl ;
	return 0;
} 