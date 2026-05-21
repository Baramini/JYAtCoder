#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<int>> v(H, vector<int>(W, 0));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (i - 1 >= 0) v[i][j]++;
            if (i + 1 < H) v[i][j]++;
            if (j - 1 >= 0) v[i][j]++;
            if (j + 1 < W) v[i][j]++;
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }

    return 0;
}