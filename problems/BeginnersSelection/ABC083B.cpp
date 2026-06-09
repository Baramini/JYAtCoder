#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int sum, result = 0;

    for (int i = 1; i <= N && i < 10; i++) {
        if (i >= A && i <= B) {
            result += i;
        }
    }
    for (int i = 10; i <= N && i < 100; i++) {
        if (i % 10 == 0) {
            sum = (i / 10);
        }
        else {
            sum++;
        }
        
        if (sum >= A && sum <= B) {
            result += i;
        }
    }
    for (int i = 100; i <= N && i < 1000; i++) {
        if (i % 10 == 0) {
            sum = (i / 100) + (i / 10 % 10);
        }
        else {
            sum++;
        }

        if (sum >= A && sum <= B) {
            result += i;
        }
    }
    for (int i = 1000; i <= N && i < 10000; i++) {
        if (i % 10 == 0) {
            sum = (i / 1000) + (i / 100 % 10) + (i / 10 % 10);
        }
        else {
            sum++;
        }

        if (sum >= A && sum <= B) {
            result += i;
        }
    }
    if (N == 10000 && A == 1) {
        result += 10000;
    }

    cout << result;

    return 0;
}