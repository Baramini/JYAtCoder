#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    vector<vector<int>> ABC(N + 1, vector<int>(3, 0));

    for (int i = 1; i <= N; i++) {
        ABC[i][0] = ABC[i - 1][0];
        ABC[i][1] = ABC[i - 1][1];
        ABC[i][2] = ABC[i - 1][2];

        switch (S[i - 1]) {
            case 'A':
                ABC[i][0]++;
                break;
            case 'B':
                ABC[i][1]++;
                break;
            case 'C':
                ABC[i][2]++;
                break;
            default:
                break;
        }
    }

    size_t answer = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = i + 2; j <= N; j++) {
            int a = ABC[j][0] - ABC[i - 1][0];
            int b = ABC[j][1] - ABC[i - 1][1];
            int c = ABC[j][2] - ABC[i - 1][2];

            if (a != b && b != c && a != c) answer++;
        }
    }

    cout << answer;

    return 0;
}