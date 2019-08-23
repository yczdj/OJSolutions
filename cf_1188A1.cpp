#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> deg(n);
    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        deg[--u]++;
        deg[--v]++;
    }
    bool ans = true;
    for(int i = 0; i < n; i++) {
        if(deg[i] == 2) {
            ans = false;
            break;
        }
    }
    if(ans) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
