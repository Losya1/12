#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, x, y;
    int K;
    int count = 0;
    cout << "Enter text" << endl;
    cin >> text;
    cout << "Enter multiplicity" << endl;
    cin >> K;
    if (K < 1) {
        cout << "k - error" << endl;
        return 0;
    }
    for (int i = 0; i < K; ++i) {
        x += text[i];
        cout << "000 - " << x << endl;
    }
    for (int i = 0; i < text.size(); i += K) {
        cout << "111 - " << i << endl;
        for (int i2 = 0; i2 < K; ++i2) {
            y += text[i2 + i];
            cout << "222 - " << y << endl;
        }
        if (x == y) {
            cout << count + 1 << ": true" << endl;
            count += 1;
        }
        else {
            cout << count + 1 << ": false" << endl;
            count += 1;
        }
        y = "";
    }
    return 0;
}