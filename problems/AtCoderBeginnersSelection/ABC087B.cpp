#include <iostream>
#include <vector>

using namespace std;

int result = 0;
int get_money(int index) {
    if (index < 1) return 500;
    if (index < 2) return 100;
    return 50; 
}
void combination(vector<int>& v, int X, int index) {
    if (X == 0) {
        result++;
        return;
    }
    if (index > 2 || X < 0) return;

    if (v[index] > 0) {
        v[index]--;
        combination(v, X - get_money(index), index);
        v[index]++;
    }

    combination(v, X, index + 1);
}

int main() {
    vector<int> v(3);
    int X;
    cin >> v[0] >> v[1] >> v[2] >> X;

    combination(v, X, 0);
    cout << result;

    return 0;
}