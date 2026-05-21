#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int X, Q;
    cin >> X >> Q;

    int med = X;
    vector<int> answers;

    priority_queue<int> l_tree;
    priority_queue<int, vector<int>, greater<int>> r_tree;

    for (int i = 0; i < Q; i++) {
        int A, B;
        cin >> A >> B;

        int k = 0;
        if (A >= med) {
            r_tree.push(A);
            k++;
        }
        else {
            l_tree.push(A);
            k--;
        }

        if (B >= med) {
            r_tree.push(B);
            k++;
        }
        else {
            l_tree.push(B);
            k--;
        }

        if (k > 0) {
            l_tree.push(med);
            med = r_tree.top();
            r_tree.pop();
        }
        else if (k < 0) {
            r_tree.push(med);
            med = l_tree.top();
            l_tree.pop();
        }

        answers.push_back(med);
    }

    for (int i = 0; i < answers.size(); i++) printf("%d\n", answers[i]);

    return 0;
}