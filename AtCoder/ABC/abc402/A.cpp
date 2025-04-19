#include <bits/stdc++.h>
using namespace std;

// _shaakib

#define endl "\n";
typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++) cin >> s[i];

    string str;
    for(int i = 0; i < n; i++){
        if(isupper(s[i])){
            str.push_back(s[i]);
        }
    }

    cout << str << endl;

   return 0;
}