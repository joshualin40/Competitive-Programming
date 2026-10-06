#include <iostream>
using namespace std;
#include <vector> 

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char prev = 'D';
    int curr{1}; 
    int res{1};
    char i{}; 
    while (cin >> i) {
        if (i == prev)
            curr += 1;
        else
            curr = 1;
        if (curr > res)
            res = curr;
        prev = i;
    }   
    cout << res; 
} 