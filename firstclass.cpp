#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;
class student
{
public:
 char name[100];
 int age;
public:
	void getName(void);
	void getAge(void);
	void getData(void);
};

void student :: getName(void){
	cin >> name;
} 

void student :: getAge(void){
	cin >> age;
}
void student :: getData(void){
	cout << name << endl << age;
}

int main(){
	student p;
		p.age = 15;
	p.getData();
	p.getName();
	p.getAge();
	int x = 9;	
	cout << "x=" "x" ;
	return 0;
}