//https://www.hackerrank.com/challenges/grid-challenge
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int T, N;
    string ans = "YES";
    cin >> T;
    while(T>0){
        ans = "YES";
        cin >> N;
        char c[N][N];
        for(int i =0 ; i <N;i++){
               cin >> c[i];
               sort(c[i],c[i]+N);
               //cout << c[i];
               if(i!=0 && ans == "YES"){
                for(int j=0;j<N;j++){
                    if(c[i-1][j]>c[i][j])
                        ans = "NO";
                }
               }
               //cout << c[i];
        }
        cout << ans << endl;
        T--;
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
