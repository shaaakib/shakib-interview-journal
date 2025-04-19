#include <bits/stdc++.h>
using namespace std;

// _shaakib

#define endl "\n";
typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int Q;
    cin >> Q;

    queue<int> line;

    for (int i = 0; i < Q; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            int X;
            cin >> X;
            line.push(X);
        } else if (type == 2) {
            cout << line.front() << endl;
            line.pop();
        }
    }

   return 0;
}