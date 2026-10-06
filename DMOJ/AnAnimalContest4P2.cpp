#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
#include <climits>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n{}, q{};
    cin >> n >> q;
    vector<int> lights(n);
    vector<pair<ll,int>> prefix; 
    for (int i = 0; i < n; i++) {
        cin >> lights[i]; 
        if (i == 0) prefix.push_back({lights[i], i}); 
        else if (i > 0 && prefix.back().first <= 1e9) {
            ll newlcm = lcm(lights[i], prefix.back().first);
            if (newlcm > prefix.back().first) prefix.push_back({newlcm, i});
        }  
    }

    ll t{};
    while (cin >> t) {
        bool found = false;
        if (t == 0) {
            cout << -1 << '\n'; 
            continue; 
        }
        for (int i = 0; i < prefix.size(); i++) {
            if (t % prefix[i].first != 0) {
                cout << prefix[i].second + 1 << '\n'; 
                found = true;
                break;
            }
        }
        if (!found)
            cout << -1 << '\n'; 
    }
    
    
}
