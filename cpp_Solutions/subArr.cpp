#include<bits/stdc++.h>
using namespace std;

void subArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for(int k = i; k <=j; k++){
                cout << arr[k] << " " << endl;
            }
        }
    }
}


int main(){
    int arr[] = {4,3,6,7,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Subarrays are" << endl;
    subArr(arr,n);
    return 0;
}