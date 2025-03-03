#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int cases = 1; cases <= t; cases++) {
        int h, m;
        cin >> h >> m;
        int s = (h * 60) + m;
        int S = 1440 - s;
        cout << S << endl;  // Print result for each test case
    }
    
    return 0;
}
