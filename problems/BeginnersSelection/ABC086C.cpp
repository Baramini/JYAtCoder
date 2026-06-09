#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    string YN = "Yes";
    int dt, x = 0, y = 0;
    int t = 0, xt, yt;

    for (int i = 0; i < N; i++) {
        int temp_t = t;
        cin >> t >> xt >> yt;
        dt = t - temp_t;
        if (YN == "No") continue;
        
        int diff_xy = abs(xt - x) + abs(yt - y);

        if (diff_xy > dt) YN = "No";
        else {
            if ((dt - diff_xy) % 2 == 1) YN = "No";
            else {
                x = xt;
                y = yt;
            }
        }
    }

    cout << YN;

    return 0;
}