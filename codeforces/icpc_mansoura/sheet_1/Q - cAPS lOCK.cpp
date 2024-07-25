#include <bits/stdc++.h>
using namespace std;

char changecase(char c) {
    if (islower(c))
        return toupper(c);
    if (isupper(c))
        return tolower(c);
    return c;
}

int main() {
    string s;
    cin >> s;

    bool all_upper = true;
    bool all_upper_except_first = true;

    for (int i = 0; i < s.size(); ++i) {
        if (islower(s[i])) {
            all_upper = false;
            if (i != 0) all_upper_except_first = false;
        } else {
            if (i == 0) all_upper_except_first = false;
        }
    }

    if (all_upper || all_upper_except_first) {
        transform(s.begin(), s.end(), s.begin(), changecase);
    }

    cout << s << endl;

    return 0;
}
