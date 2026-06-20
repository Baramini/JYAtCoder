#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    char X;
    cin >> N >> X;

    vector<vector<char>> seat(N, vector<char>(5));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            char c;
            cin >> c;
            seat[i][j] = c;
        }
    }

    int x = (int)(X - 'A');
    for (int i = 0; i < N; i++) {
        if (seat[i][x] == 'o') {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";

    return 0;
}