#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int freq[26];
        for (int i = 0; i < 26; i++)
            freq[i] = 0;
 
        for (int i = 0; i < n; i++)
            freq[s[i] - 'a']++;
 
        int mx = 0;
        char mxChar = s[0];
 
        for (int i = 0; i < 26; i++) {
            if (freq[i] > mx) {
                mx = freq[i];
                mxChar = char('a' + i);
            }
        }
 
        int mn = 100;
        char mnChar = 0;
 
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0 && freq[i] < mn && char('a' + i) != mxChar) {
                mn = freq[i];
                mnChar = char('a' + i);
            }
        }
 
        for (int i = 0; i < n; i++) {
            if (s[i] == mnChar) {
                s[i] = mxChar;
                break;
            }
        }
 
        cout << s << "\n";
    }
 
    return 0;
}