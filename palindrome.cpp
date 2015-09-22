#include <string>
#include <iostream>
using namespace std;
int main() {
    int T,len,ops;
    cin >> T;
    while(T>0){
        ops =0;
        string str;
        cin >> str;
        len = str.length();
        for(int i = 0; i < (int)len/2 ;i++){
            if(str[i] > str[len-i-1]){
                ops += (int)str[i] - (int)str[len-i-1];
            }
            else if(str[i] < str[len-i-1]){
                ops += (int)str[len-i-1]-(int)str[i];
            }
        }
        cout << ops <<endl;
        T--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
