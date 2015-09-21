#include <iostream>
using namespace std;

struct list{
	int data;
	struct list *next;
};

int main(){
	list p1;
	p1.data = 23;
	list p2;
	p1.next = &p2;
	p2.data = 267;
	p1.next -> data = 3000;
	cout << p2.data;
	return 0;
}