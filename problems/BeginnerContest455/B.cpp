#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> hw(H, string('-', W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            char c;
            cin >> c;
            hw[i][j] = c;
        }
    }

    int count = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            for (int k = i; k < H; k++) {
                for (int l = j; l < W; l++) {
                    vector<char> v;
                    for (int m = i; m <= k; m++) {
                        for (int n = j; n <= l; n++) {
                            v.push_back(hw[m][n]);
                        }
                    }
                    
                    bool checker = true;
                    int size = v.size();
                    for (int k = 0; k < size / 2; k++) {
                        if (v[k] != v[size - k - 1]) {
                            checker = false;
                            break;
                        }
                    }
                    
                    if (checker) count++;
                }
            }
        }
    }

    cout << count;

    return 0;
}