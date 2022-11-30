#include <iostream>

using namespace std;

bool nice_num(string &s) {
    if ((s[1] - char(48)) == 0) {
        return false;
    }
    for (int i = 1; i < s.length(); i += 2) {
        if ((s[i] - char(48) + 1) % 2 == 0){

        } else {
            return false;
        }
    }
    for (int i = 2; i < s.length(); i+= 2) {
        if ((s[i] - char(48)) % 2 == 0){

        } else {
            return false;
        }
    }
    return true;
}

int main() {
    int T{};
    cin >> T;
    long long N[T];
    for (int i = 0; i < T; i++) {
        cin >> N[i];
    }
    string S[T];
    for (int i = 0; i < T; i++) {
        if (N[i] < 0) {
            S[i] = to_string(N[i]);
        } else {
            S[i] = "0" + to_string(N[i]);
        }
    }
    for (int i = 0; i < T; i++) {
        cout << (nice_num(S[i]) == true) ? "TRUE" : "FALSE";
        cout << endl;
    }
    return 0;
}
