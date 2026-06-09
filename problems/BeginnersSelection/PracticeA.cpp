#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    vector<int> v(3);

    cin >> v[0];
    cin >> s;
    if (s.length() > 3) {
        string front = s.substr(0, 3);
        string back = s.substr(3);

        v[1] = stoi(front);
        v[2] = stoi(back);
    }
    else {
        v[1] = stoi(s);
        cin >> s;
        v[2] = stoi(s);
    }

    cin >> s;

    cout << (v[0] + v[1] + v[2]) << ' ' << s;

    return 0;
}