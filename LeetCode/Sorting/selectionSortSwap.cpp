#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int a[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int n = sizeof(a) / sizeof(a[0]);

    for(int i = 0; i < n; i++){
        int mini = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[mini]){
                mini = j;
            }
        }

        int tmp = a[i];
        a[i] = a[mini];
        a[mini] = tmp;
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    cout << endl;

   return 0;
}