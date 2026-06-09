#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;

    size_t a = 0;
    size_t b = 0;
    size_t c = 0;

    for (int i = 0; i < str.size(); i++) {
        switch (str[i]) {
            case 'a':
                a += (b + c + (size_t)1);
                a %= (size_t)998244353;
                break;
            case 'b':
                b += (a + c + (size_t)1);
                b %= (size_t)998244353;
                break;
            case 'c':
                c += (a + b + (size_t)1);
                c %= (size_t)998244353;
                break;
            default:
                break;
        }
    }

    size_t answer = (a + b + c) % (size_t)998244353;
    cout << answer;

    return 0;
}