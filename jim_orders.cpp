//https://www.hackerrank.com/challenges/jim-and-the-orders
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int t[n],d[n],s1[n];
    vector<pair<int,int> > items;
    int index[n];
    for(int i=0;i<n;i++){
        cin >> t[i] >> d[i];
        s1[i] = t[i]+d[i];   
        items.push_back(make_pair(s1[i],i));
    }
    sort(items.begin(),items.end());
    for(int i=0;i<n;i++){
        cout << items[i].second << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
