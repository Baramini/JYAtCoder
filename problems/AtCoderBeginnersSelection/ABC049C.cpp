#include <iostream>
#include <string>

using namespace std;

#define S1 "dream" 
#define S2 "dreamer"
#define S3 "erase"
#define S4 "eraser"

string YN = "NO";
void combination(string& s, int start) {
    if (YN == "YES") return;
    if (start == s.length()) {
        YN = "YES";
        return;
    }
    if (start > s.length()) return;

    if (s.substr(start, 5) == "dream") combination(s, start + 5);
    
    if (s.substr(start, 7) == "dreamer") combination(s, start + 7);
    
    if (s.substr(start, 5) == "erase") combination(s, start + 5);
    
    if (s.substr(start, 6) == "eraser") combination(s, start + 6);
}

int main() {
    string s;
    cin >> s;

    combination(s, 0);

    cout << YN;

    return 0;
}