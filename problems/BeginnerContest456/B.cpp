#include <iostream>
#include <vector>

using namespace std;

void count456(vector<int>& v) {
    for (int i = 0; i < 6; i++) {
        int k;
        scanf("%d", &k);
        switch (k) {
            case 4:
                v[0]++;
                break;
            case 5:
                v[1]++;
                break;
            case 6:
                v[2]++;
                break;
            default:
                break;
        }
    }
}

int main() {
    vector<int> A(3, 0), B(3, 0), C(3, 0);
    count456(A);
    count456(B);
    count456(C);

    int count_all = {
        A[0] * B[1] * C[2] + A[0] * B[2] * C[1] +
        A[1] * B[0] * C[2] + A[1] * B[2] * C[0] +
        A[2] * B[0] * C[1] + A[2] * B[1] * C[0]
    };
    
    double answer = (double)count_all / 216.0;
    cout << answer;

    return 0;
}