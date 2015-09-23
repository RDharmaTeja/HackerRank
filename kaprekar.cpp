#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int p,q;
    cin >> p >> q;
    int A[] = {1, 9, 45, 55, 99, 297, 703, 999, 2223, 2728, 4879, 4950, 5050, 5292, 7272, 7777, 9999, 17344, 22222, 38962, 77778, 82656, 95121, 99999};
    int *ptr;
    int count =0;
    for(int i= p; i<= q; i++){
    ptr = find(A,A+24,i);
        if(ptr!= A+24){
            cout << i << " ";
            count++;
        }        
    }
    if(count == 0)
        cout << "INVALID RANGE" << endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
