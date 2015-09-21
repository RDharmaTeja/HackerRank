//https://www.hackerrank.com/challenges/mark-and-toys
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() 
{
    long long n, k; cin >> n >> k;
    vector<int> prices;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
    
    long long int answer = 0;
    
    // Write the code for computing the final answer using n,k,prices
    sort(prices.begin(), prices.end());   
    long long int count =0;
    while(k > 0){
        if(prices[count] <= k){
            // answer += prices[count];
            k = k - prices[count];
            count++; 
        }
        else if(prices[count] > k)
            break;
    }

    cout << count << endl;
    
    return 0;
}