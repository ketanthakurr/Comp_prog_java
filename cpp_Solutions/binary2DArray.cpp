#include<bits/stdc++.h>
using namespace std;

int main(){
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

    // int low = 1;
    // int high = n;
    // int ans = 0;

    // while (low <= high)
    // {
    //     int mid = (low + high)/2;

    //     if(mid * mid <= n){
    //         ans = mid;
    //         low = mid + 1;
    //     }

    //     else{
    //         high = mid - 1;
    //     }
    // }
    // cout << ans;

}