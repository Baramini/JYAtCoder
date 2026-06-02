#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        long double c1[3];
        long double c2[3];

        cin >> c1[0] >> c1[1] >> c1[2] >> c2[0] >> c2[1] >> c2[2];
        long double a = pow((c1[0] - c2[0]), 2.0);
        long double b = pow((c1[1] - c2[1]), 2.0);
        long double distance = sqrt(a + b);

        long double sum_r = c1[2] + c2[2];
        long double sub_r = abs(c1[2] - c2[2]);
        
        if (distance < sub_r || distance > sum_r) {
            cout << "No\n";
        }
        else cout << "Yes\n";
    }

    return 0;
}