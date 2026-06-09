#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int n;

    cin >> s >> n;

    string answer = "";
    for (int i = n; i < s.size() - n; i++) {
        answer += (s[i]);
    }

    cout << answer;

    return 0;
}