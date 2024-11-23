/*
input:
2
4
1 6 3 7
3
3 1 2
output:
1 6 3 7 6 6 7 6 7 7 
3 1 2 3 2 3 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n-i; j++) {
                int max_value = INT_MIN;
                for(int k = j; k <= j+i; k++) {
                    max_value = max(max_value, arr[k]);
                }
                cout << max_value << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
