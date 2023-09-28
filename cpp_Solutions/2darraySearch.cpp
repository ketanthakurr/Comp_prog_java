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

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    bool found = false;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (val[i][j] == target) {
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (found) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
