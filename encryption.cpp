//https://www.hackerrank.com/challenges/encryption
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string str;
    cin >> str;
    int len = str.length();
    int rows = sqrt(len);
    int cols = rows;
    if(rows*rows != len)
        cols = rows+1;
    if(rows*cols < len)
        rows = cols;
    //cout << cols << " " << rows;
    for(int i =0; i < cols; i++){
        for(int j =0; j< rows; j++){
            if(j*cols + i+1 <= len)
                cout << str[j*cols+i];
        }
        cout << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}