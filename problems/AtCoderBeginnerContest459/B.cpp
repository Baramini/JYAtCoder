#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> answer;
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;

        switch (str.front()) {
            case 'a':
            case 'b':
            case 'c':
                answer.push_back(2);
                break;
            case 'd':
            case 'e':
            case 'f':
                answer.push_back(3);
                break;
            case 'g':
            case 'h':
            case 'i':
                answer.push_back(4);
                break;
            case 'j':
            case 'k':
            case 'l':
                answer.push_back(5);
                break;
            case 'm':
            case 'n':
            case 'o':
                answer.push_back(6);
                break;
            case 'p':
            case 'q':
            case 'r':
            case 's':
                answer.push_back(7);
                break;
            case 't':
            case 'u':
            case 'v':
                answer.push_back(8);
                break;
            case 'w':
            case 'x':
            case 'y':
            case 'z':
                answer.push_back(9);
                break;
        }
    }

    for (vector<int>::iterator iter = answer.begin(); iter != answer.end(); iter++) {
        printf("%d", *(iter));
    }

    return 0;
}