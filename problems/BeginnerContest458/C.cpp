#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    long long answer = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'C') {
            int a = i - 0;
            int b = s.size() - 1 - i;
            answer += ((a < b) ? a : b) + 1;
        }
    }

    cout << answer;

    return 0;
}