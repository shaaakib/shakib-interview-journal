#include <bits/stdc++.h>
using namespace std;

// _shakib

#define endl "\n";
typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    ll a[n];

    for(int i = 0; i < n; i++) cin >> a[i];


    ll ans = 0,sum = 0, odd = 0, even = 0;

    for(int i = 0; i < n; i++){
        sum += a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            odd++;
        }
        else{
            even++;
        }
    }

    if(odd && even){
        ans =  (sum - odd) + 1;
    }
    else{
        for(int i = 0; i < n; i++){
            ans = max(ans, a[i]);
        }
    }

    cout << ans << endl;
    }

   return 0;
}