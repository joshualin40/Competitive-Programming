#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
 

 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t{};
    cin >> t;
    vector<int> xvalues(t, 0);
    vector<int> yvalues(t, 0); 

    for (int i = 0; i < t; i++) {
        cin >> xvalues[i];
    }
    for (int i = 0; i < t; i++) {
        cin >> yvalues[i];
    }
    int res{};
    for (int i = 0; i < t; i++) {
        for (int j = i; j < t; j++){
            int dist = (xvalues[i] - xvalues[j]) * (xvalues[i] - xvalues[j]) + (yvalues[i] - yvalues[j]) * (yvalues[i] - yvalues[j]);
            if (dist > res)
                res = dist;
        }

    }
    cout << res; 



}
 