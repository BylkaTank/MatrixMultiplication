#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    int b[4];
    int c[4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
        cin >> b[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                c[i] += a[j][k] * b[k];
            }
        }
    }
}

