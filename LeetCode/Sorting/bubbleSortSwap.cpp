#include <bits/stdc++.h>
using namespace std;

// _shakib

#define endl "\n";
typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    cout << endl;

   return 0;
}