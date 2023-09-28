#include<bits/stdc++.h>
using namespace std;

int main() {
    int row, col;

    cout << "Enter the rows" << endl;
    cin >> row;
    cout << "Enter the col" << endl;
    cin >> col;

    int val[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> val[i][j];
        }
    }

    for (int j = 0; j < col; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < row; i++) {
                cout << val[i][j] << " ";
            }
        } else {
            for (int i = row - 1; i >= 0; i--) {
                cout << val[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
