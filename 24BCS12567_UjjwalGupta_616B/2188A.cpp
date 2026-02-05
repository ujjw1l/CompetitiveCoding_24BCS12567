#include <iostream>
#include <vector>
 
using namespace std;
 
void solves() {
    int n;
    cin >> n;
    vector<int> p(n + 1);
    p[n] = 1;
    vector<bool> u(n + 1, false);
    u[1] = true;
    for (int i = n - 1; i >= 1; i--) {
        if (p[i + 1] + i <= n && !u[p[i + 1] + i]) {
            p[i] = p[i + 1] + i;
        } else {
            p[i] = p[i + 1] - i;
        }
        u[p[i]] = true;
    }
 
    for (int i = 1; i <= n; i++) {
        cout << p[i] << (i == n ? "" : " ");
    }
    cout << "\n";
}
 
int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solves();
    }
    return 0;
}