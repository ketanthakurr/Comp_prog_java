#include<bits/stdc++.h>
using namespace std;


int main(){
    int row, col;

    cout << "Enter the rows" <<endl;
    cin >> row;
    cout << "Enter the col" << endl;
    cin >> col;

    int val[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> val[i][j];
            // cout << val[i][j] << " k";
        }
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<val[i][j]<<" ";
        }

        cout<<endl;
    }
    
}