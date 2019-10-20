#include <iostream>
#include <string>
using namespace std;

bool verifyPattern(int high, string s, int n, string st) {
    int low = 0;
    while ((high < n) && (s[low] == s[high])) {
        ++high;
        ++low;
    }
    --low;
    return (high == n) && (s[low] == st[st.length() - 1]);
}

bool hasSubpattern(string s) {
    string st;
    st.push_back(s[0]);
    int n = s.length();
    for (int t = 1; t < n; t++) {
        if (s[t] == st[0]) {
            if (verifyPattern(t, s, n, st))
                return true;
        }
        st.push_back(s[t]);
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    cout << hasSubpattern(s) << endl;
}