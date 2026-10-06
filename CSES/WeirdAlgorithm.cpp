#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n{};
    std::cin >> n;

    while (n != 1) {
        std::cout << n << " "; 
        if (n % 2 == 0) 
            n /= 2;
        else 
            n = n * 3 + 1;
    }
    std::cout << n << " "; 
}