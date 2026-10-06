#include <iostream>
using namespace std;
#include <vector> 

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n{}; 
    cin >> n; 
    std::vector<bool> flags(n, false); 
    long long i{}; 
    for (long long j = 0; j < n-1; j++) {
        cin >> i; 
        flags[i-1] = true;
    }
    for (long long k = 0; k < n; k++) {
        if (flags[k] == false) {
            cout << k + 1; 
        }
    }
} 