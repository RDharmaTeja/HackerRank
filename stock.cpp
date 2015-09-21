#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T,N;
    cin >> T;
    for(int i =0 ; i< T; i++){
       cin >> N;
       unsigned int P[N];
        for(int j=0; j< N; j++)
            cin >> P[j];
        int profit = 0,local_max=N-1;
        for(int k =N-2; k>= 0; k--){
            if(P[k] > P[local_max])
                local_max = k;
            else{
                profit += P[local_max] - P[k];
            }

        }
        cout << profit << endl;        
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
