#include <iostream>
#include <string>
using namespace std;

int IskPeriod(string text) {
    string x, y;
    bool b = false;
    int K;
    cout << "Enter multiplicity" << endl;
    cin >> K;
    if (K < 1 || K > text.size()) {
        cout << "K - error" << endl;
        return 0;
    }
    for (int i = 0; i < K; ++i) {
        x += text[i];
        cout << "000 - " << x << endl;
    }
    for (int i = K; i < text.size(); i += K) {
        cout << "111 - " << i << endl;
        for (int i2 = 0; i2 < K; ++i2) {
            if (i + i2 > text.size()) {
                cout << "false" << endl;
                return 0;
            }
            y += text[i2 + i];
            cout << "222 - " << y << endl;
        }
        if (x == y) {
            b = true;
        }
        else {
            cout << "false" << endl;
            return 0;
        }
        y = "";
    }
    if (b == true) {
        cout << "true" << endl;
        return 0;
    }
}

int main() {
    string text;
    cout << "Enter text" << endl;
    cin >> text;
    IskPeriod(text);
    return 0;
}